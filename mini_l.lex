%option noyywrap
%{
#include <stdlib.h>
#include <string>
#include "parser.tab.h" 
   int currLine = 1, currPos = 1;
   int numNumbers = 0;
   int numOperators = 0;
   int numParens = 0;
   int numBrackets = 0;
   int numRelOperators = 0;
   int numWords = 0;
   int numSemiColons = 0;
   int numColons = 0;
   int numSpecialDesign = 0;
   int numCommas = 0;
   int numEquals = 0;
   int numAssignSymbols = 0;
   int numComments = 0;
%}

DIGIT    [0-9]
LETTER    [a-zA-Z]
INTEGER  [0-9]
NewLine  [\n] 
   
%%

"-"            {currPos += yyleng; numOperators++; return MINUS;}
"+"            {currPos += yyleng; numOperators++; return PLUS;}
"*"            {currPos += yyleng; numOperators++; return MULT;}
"/"            {currPos += yyleng; numOperators++; return DIV;}
"%"            {currPos += yyleng; numOperators++; return PER;}
"="            {currPos += yyleng; numEquals++; return EQUAL;}
"("            {currPos += yyleng; numParens++; return L_PAREN;}
")"            {currPos += yyleng; numParens++; return R_PAREN;}
"["            {currPos += yyleng; numBrackets++; return L_SQUARE_BRACKET;}
"]"            {currPos += yyleng; numBrackets++; return R_SQUARE_BRACKET;} 
"=="           {currPos += yyleng; numRelOperators++; return EQ;}
"<>"           {currPos += yyleng; numRelOperators++; return NEQ;}
"<"            {currPos += yyleng; numRelOperators++; return LT;}
">"            {currPos += yyleng; numRelOperators++; return GT;}
"<="           {currPos += yyleng; numRelOperators++; return LTE;}
">="           {currPos += yyleng; numRelOperators++; return GTE;}
";"            {currPos += yyleng; numSemiColons++; return SEMICOLON;}
","            {currPos += yyleng; numCommas++; return COMMA;}
":"            {currPos += yyleng; numColons++; return COLON;}
":="           {currPos += yyleng; numAssignSymbols++; return ASSIGN;}
"function"     {currPos += yyleng; numWords++; return FUNCTION;}
"beginparams"  {currPos += yyleng; numWords++; return BEGIN_PARAMS;}
"endparams"    {currPos += yyleng; numWords++; return END_PARAMS;}
"beginlocals"  {currPos += yyleng; numWords++; return BEGIN_LOCALS;}
"endlocals"    {currPos += yyleng; numWords++; return END_LOCALS;}
"beginbody"    {currPos += yyleng; numWords++; return BEGIN_BODY;}
"endbody"      {currPos += yyleng; numWords++; return END_BODY;}
"integer"      {currPos += yyleng; numWords++; return INTEGER;}
"array"        {currPos += yyleng; numWords++; return ARRAY;}
"of"           {currPos += yyleng; numWords++; return OF;}
"if"           {currPos += yyleng; numWords++; return IF;}
"then"         {currPos += yyleng; numWords++; return THEN;}
"endif"        {currPos += yyleng; numWords++; return ENDIF;}
"else"         {currPos += yyleng; numWords++; return ELSE;}
"while"        {currPos += yyleng; numWords++; return WHILE;}
"do"           {currPos += yyleng; numWords++; return DO;}
"for"          {currPos += yyleng; numWords++; return FOR;}
"beginloop"    {currPos += yyleng; numWords++; return BEGINLOOP;}
"endloop"      {currPos += yyleng; numWords++; return ENDLOOP;}
"continue"     {currPos += yyleng; numWords++; return CONTINUE;}
"read"         {currPos += yyleng; numWords++; return READ;}
"write"        {currPos += yyleng; numWords++; return WRITE;}
"and"          {currPos += yyleng; numWords++; return AND;}
"or"           {currPos += yyleng; numWords++; return OR;}  
"not"          {currPos += yyleng; numWords++; return NOT;}
"true"         {currPos += yyleng; numWords++; return TRUE;}
"false"        {currPos += yyleng; numWords++; return FALSE;}
"return"       {currPos += yyleng; numWords++; return RETURN;}

{INTEGER}({INTEGER})*       {currPos += yyleng; yylval.type_id.val=(int )strtol(yytext, NULL, 10); return NUMBER;} 
({LETTER}({LETTER}|{DIGIT}|"_")*({LETTER}|{DIGIT}))|({LETTER})      {currPos += yyleng; numWords++; yylval.type_id.name=strdup(yytext); return IDENT;} 
"##".*{NewLine}           {currPos += yyleng; numComments++;}
{NewLine}                 {currLine += 1; currPos = 1;}     

[ \t]+         {/* ignore spaces */ currPos += yyleng;}



.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

{LETTER}({LETTER}|{DIGIT}|"_")*"_"              {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(1);}

({DIGIT}|"_")({LETTER}|{DIGIT}|"_")*               {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(2);}


%%

