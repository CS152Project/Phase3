%{
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void yyerror(const char *msg);
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex();
%}

%union {   
  struct _typeId
    {
      char *name;
      int val;
    } type_id;  
}
%error-verbose
%start program
%token FUNCTION SEMICOLON COMMA COLON READ WRITE
%token MULT DIV PLUS MINUS EQUAL PER END FOR CONTINUE 
%token L_SQUARE_BRACKET R_SQUARE_BRACKET L_PAREN R_PAREN 
%token BEGIN_PARAMS END_PARAMS BEGINLOOP ENDLOOP BEGIN_LOCALS END_LOCALS 
%token BEGIN_BODY END_BODY INTEGER ARRAY OF ENDIF ELSE IF THEN WHILE DO  
%token EQ NEQ LT GT GTE LTE AND OR NOT TRUE FALSE RETURN ASSIGN    
%token <type_id> IDENT
%token <type_id> NUMBER
%right ASSIGN
%left OR
%left AND
%right NOT 
%left EQ NEQ LT GTE LTE 
%left ADD SUB
%left MUlT DIV PER
%right UMINUS
%left L_SQUARE_BRACKET R_SQUARE_BRACKET 
%left L_PAREN R_PAREN

%type <type_id> statements expression expressions multiplicative_expression statement term var vars    

%%


/*start_program: program {if (no_error) */
	   /*  printf("%s\n", $1);} */

program: /*empty*/ 
       {} 
       | functions program
       {}
       ;
functions: /*empty*/
          {} 	 
       | function functions
         {printf("functions->function functions\n");}
       ;
function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
	{ 
        } 
       ;
declarations: /*empty*/
	   {}
        | declaration SEMICOLON declarations 
           {}
        | error SEMICOLON declarations
           {printf("syntax error: Missing declaration at line %d\n", currLine);}
        | declaration error declarations 
           {printf("syntax error: Missing SEMICOLON at line %d\n", currLine);} 
        | declaration SEMICOLON error
           {printf("syntax error: Missing declarations at line %d\n", currLine);}
	;
declaration: ident COLON INTEGER
           {printf("declaration->identifiers SEMICOLON INTEGER\n");}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER 
	  {printf("declaration->identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
	  {printf("declaration->identifiers SEMICOLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
        | error COLON INTEGER
          {printf("syntax error: missing identifier at line %d\n", currLine);}
        | ident error INTEGER 
          {printf("syntax error: missing COLON at line %d\n", currLine);}
        | ident COLON error 
          {printf("syntax error: missing INTEGER at line %d\n", currLine);} 
        ;

ident: IDENT 
	   {printf("ident->IDENT\n");}
          | IDENT COMMA ident   
	  {printf("ident->IDENT COMMA ident\n");}
         ;
statements: statement SEMICOLON
	  {printf("statements->statement SEMICOLON\n");}
         | statement SEMICOLON statements
          {printf("statement->statement SEMICOLON statements\n");}
         | statement SEMICOLON error  
          {printf("syntax error: missing statements at line %d\n", currLine);}
         | error SEMICOLON statements
          {printf("syntax error: missing statement at line %d\n", currLine);}
         | statement error statements
          {printf("syntax error: missing SEMICOLON at line %d\n", currLine);} 
         
statement: var ASSIGN expressions
	   {printf("= %s, %d\n", $1.name, $3.val);}  
         | IF bool_expression THEN statements ENDIF
         {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}
         | IF bool_expression THEN statements ELSE statements ENDIF
         {printf("statement->IF bool_expression THEN statements SEMICOLON ENDIF\n");}  
         | WHILE bool_expression BEGINLOOP statements ENDLOOP
         {printf("statement->WHILE bool_expression BEGINLOOP statements SEMICOLON ENDLOOP\n");}
         | DO BEGINLOOP statements ENDLOOP WHILE bool_expression
         {printf("statement->DO BEGINLOOP statements SEMICOLON ENDLOOP WHILE bool_expression\n");}
         | FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements ENDLOOP
         {printf("statement->FOR vars ASSIGN NUMBER SEMICOLON bool_expression SEMICOLON vars ASSIGN expressions BEGINLOOP statements SEMICOLON ENDLOOP\n");}
         | READ vars 
         {printf(".< %s\n", $2.name);}  
         | READ error
         {printf("syntax error: no variables at line %d\n", currLine);}
         | WRITE vars
         {printf(".> %s\n", $2.name);} 
         | WRITE error
         {printf("syntax error: no variable at line %d\n", currLine);}
         | CONTINUE
         {printf("statement->CONTINUE\n");}
         | RETURN expressions
         {printf("statement->RETURN expressions\n");} 
         ;

bool_expression: relation_and_expression
		{printf("bool_expression->relation_and_expression\n");}
              | relation_and_expression OR relation_and_expression
                {printf("bool_expression->relation_and_expression OR relation_and_expression\n");}
         ;
relation_and_expression: relation_expression
		       {printf("relation_and_expression->relation_expression\n");}
                 | relation_expression AND relation_expression
		       {printf("relation_and_expressions->relation_expression OR relation_expression\n");}
         ;
relation_expression: NOT expressions comp expressions
		  {printf("relation_expression->NOT expressions comp expressions\n");}
                 | NOT TRUE 
                 {printf("relation_expression->NOT TRUE\n");}
                 | NOT FALSE
                 {printf("relation_expression->NOT FALSE\n");}
                 | NOT L_PAREN bool_expression R_PAREN
                 {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");} 
                 | expressions comp expressions 
                 {printf("relation_expression->expressions comp expressions\n");}
                 | TRUE 
                 {printf("relation_expression->TRUE\n");}
                 | FALSE
                 {printf("relation_expression->FALSE\n");}
                 | L_PAREN bool_expression R_PAREN
                 {printf("relation_expression->L_PAREN bool_expressions R_PAREN\n");}
                 | L_PAREN error R_PAREN
                 {printf("syntax error: missing bool_expression in line %d\n", currLine);}
                 | NOT L_PAREN error R_PAREN
                 {printf("synax error: missing bool_expression in line %d\n", currLine);}
         ;

comp: EQ
    {printf("comp->EQ\n");}
     | NEQ 
    {printf("comp->NEQ\n");}
     | LT
    {printf("comp->LT\n");}
     | GT
    {printf("comp->GT\n");}
     | GTE
    {printf("comp->GTE\n");}
     | LTE
    {printf("comp->LTE\n");}
     | error 
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
   ;

var: IDENT  
    {$$.name = $1.name;} 
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET 
    {}  
    | error L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {printf("syntax error: missing identifier in line %d\n", currLine);}
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {printf("var->ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");} 
    | IDENT L_SQUARE_BRACKET error R_SQUARE_BRACKET
    {printf("syntax error: missing expression in line %d\n", currLine);} 
    | IDENT L_SQUARE_BRACKET error R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {printf("syntax error: missing expression in line %d\n", currLine);} 
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET error R_SQUARE_BRACKET
    {printf("syntax error: missing expression in line %d\n", currLine);}  
    ;

vars: var
    {$$.name = $1.name;}
    | var COMMA vars
    {}
    | error COMMA vars
    {printf("syntax error: missing variable in line %d\n", currLine);}
    | var COMMA error
    {printf("syntax error: missing variables in line %d\n", currLine);}
     
   ;
expression: multiplicative_expression  
	  {$$.val = $1.val;} 
         | multiplicative_expression PLUS multiplicative_expression
          {} 
         | multiplicative_expression MINUS multiplicative_expression
          {printf("expression->multiplicative_expression MINUS multiplicative_expression\n");}
	 | error PLUS multiplicative_expression
	  {printf("Syntax error: Missing first term for addition at line %d\n", currLine);}
	 | multiplicative_expression PLUS error
	  {printf("Syntax error: Missing second term for addition at line %d\n", currLine);}
	 | error PLUS error
	  {printf("Syntax error: No terms for PLUS available at line %d\n", currLine);}
	 | multiplicative_expression MINUS error
	  {printf("Syntax error: Missing second term for subtraction at line %d\n", currLine);}
         ;
expressions: expression
	   {$$.val = $1.val;} 
         ;

multiplicative_expression: term 
			 {$$.val = $1.val;}  
                        | term MULT term
                         {printf("multiplicative_expression->term MULT term\n");}
                        | term DIV term 
                         {printf("multiplicative_expression->term DIV term\n");}
                        | term PER term
                         {printf("multiplicative_expression->term PER term\n");}
			| error MULT term
			{printf("Syntax error: Missing first term for multiplication at line %d\n", currLine);}
			| term MULT error
			{printf("Syntax error: Missing second term for multiplication at line %d\n", currLine);}
			| error DIV term
			{printf("Syntax error: Missing first term for division at line %d\n", currLine);}
			| term DIV error
			{printf("Syntax error: Missing second term for division at line %d\n", currLine);}
			| error PER term
			{printf("Syntax error: Missing first term for modulus at line %d\n", currLine);}
			| term PER error
			{printf("Syntax error: Missing second term for modulus at line %d\n", currLine);}
			| error MULT error
			{printf("Syntax error: No terms for MULT available at line %d\n", currLine);}
			| error DIV error
			{printf("Syntax error: No terms for DIV available at line %d\n", currLine);}
			| error PER error
			{printf("Syntax error: No terms for PER available at line %d\n", currLine);}
                        ;


term: ident L_PAREN expressions R_PAREN 
    {printf("term->identifier L_PAREN expressions R_PAREN\n");}
    | var 
    {printf("term->Var\n");}
    | NUMBER 
    {$$.val = $1.val;}
    | L_PAREN expressions R_PAREN
    {printf("term->L_PAREN expressions R_PAREN\n");}
    | MINUS var
    {printf("term->MINUS var\n");}
    | MINUS NUMBER 
    {}
    | MINUS L_PAREN expressions R_PAREN
    {printf("term->MINUS L_PAREN expressions R_PAREN\n");}
    ;

%%

int main(int argc, char ** argv)
{
    if(argc >= 2)
    {
       yyin = fopen(argv[1], "r");
       if(yyin == NULL)
       { 
          yyin = stdin;
       }
    }  
    else 
    {
        yyin = stdin;
    }
    
    yyparse(); //calls yylex()
    return 1;

}

 void yyerror(const char *msg){
   printf("Error in line %d, position %d: %s\n", currLine, currPos, msg);
}
