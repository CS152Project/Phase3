%{
/* #define YY_NO_UNPUT */ 
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <map>
#include <vector>
void yyerror(const char *msg);
extern FILE * yyin;
extern int currLine;
extern int currPos;
int yylex(void);

std::string Temp();
std::string newLabel();
 
std::string Temp() 
{
   static int num = 0;
   std::string temp = "__temp__" + std::to_string(num++);
   return temp;
}
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
%token EQ NEQ LT GT GTE LTE AND OR NOT RETURN ASSIGN    
%token <type_id> IDENT TRUE FALSE
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

%type <type_id> statements expression expressions multiplicative_expression statement term var vars ident declaration relation_expression comp LT    

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
           {std::string x; x = $1.name; std::string code = ""; code += ". "; code += x; code += "\n"; std::cout << code << std::endl;}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
	  {std::string code = ""; code += $1.name; code += ":"; code += " array "; code += "["; char ch [1024]; sprintf(ch, "%d", $1.val); code += ch; code += "]"; code += " of "; code += " integer "; std:: cout << code << std::endl; $$.name = (char*)code.c_str();}
        | ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
	  {std::string code = ""; code += $1.name; code += ":"; code += " array "; code += "["; char ch [1024]; sprintf(ch, "%d", $1.val); code += ch; code += "]"; code += "["; sprintf(ch, "%d", $1.val); code += ch; code += "]"; code += " of "; code += " integer "; std:: cout << code << std::endl; $$.name = (char*)code.c_str();}
        | error COLON INTEGER
          {printf("syntax error: missing identifier at line %d\n", currLine);}
        | ident error INTEGER 
          {printf("syntax error: missing COLON at line %d\n", currLine);}
        | ident COLON error 
          {printf("syntax error: missing INTEGER at line %d\n", currLine);} 
        ;

ident: IDENT 
	   {$$.name = $1.name;}
          | IDENT COMMA ident  
	  {std::string *code = new std::string(); code->append($1.name); code->append("\n"); code->append(". "); code->append($3.name); code->append("\n"); 
           $$.name = (char*)code->c_str();}
         ;
statements: /*empty*/ 
	  {} 
         | statement SEMICOLON statements
          {printf("statement->statement SEMICOLON statements\n");}
         | statement SEMICOLON error  
          {printf("syntax error: missing statements at line %d\n", currLine);}
         | error SEMICOLON statements
          {printf("syntax error: missing statement at line %d\n", currLine);}
         | statement error statements
          {printf("syntax error: missing SEMICOLON at line %d\n", currLine);} 
         
statement: var ASSIGN expressions
	   {printf("= %s, %s\n", $1.name, $3.name);}  
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
         {printf(".> %s\n", $2.name); std::string name = "bobby";} 
         | WRITE error
         {printf("syntax error: no variable at line %d\n", currLine);}
         | CONTINUE
         {printf(". continue\n");}
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
                 { }
                 | NOT FALSE
                 {printf("relation_expression->NOT FALSE\n");}
                 | NOT L_PAREN bool_expression R_PAREN
                 {printf("relation_expression->NOT L_PAREN bool_expressions R_PAREN\n");} 
                 | expressions comp expressions 
                 {printf("relation_expression->expressions comp expressions\n");}
                 | TRUE 
                 { }
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
    {$$.name = (char *)("==");} 
     | NEQ 
    {$$.name = (char *)("!=");}
     | LT
    {$$.name = (char *)("<");}
     | GT
    {$$.name = (char *)(">");}
     | GTE
    {$$.name = (char *)(">=");}
     | LTE
    {$$.name = (char *)("<=");}
     | error 
    {printf("syntax error: missing EQ, NEQ, LT, GT, GTE or LTE in line %d\n", currLine);}
   ;

var: IDENT  
    {$$.name = $1.name;} 
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET 
    {std::string code = ""; code += $1.name; code += "["; char ch [1024]; sprintf(ch, "%d", $3.val); code += ch; code += "]"; std::cout << code << std::endl; $$.name = (char *)code.c_str();}  
    | error L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {printf("syntax error: missing identifier in line %d\n", currLine);}
    | IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET L_SQUARE_BRACKET expression R_SQUARE_BRACKET
    {std::string code = ""; code += $1.name; code += "["; char ch [1024]; sprintf(ch, "%d", $3.val); code += ch; code += "]"; code += "["; sprintf(ch, "%d", $6.val); code += ch; code += "]"; std::cout << code << std::endl; $$.name = (char *)code.c_str();} 
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
         | multiplicative_expression PLUS expression 
           {std::string code = ""; std::string tmp = Temp(); code += "+ "; code += tmp; code += ", "; code += $1.name; code += ", "; code += $3.name; std::cout << code << std::endl; $$.name = (char *)tmp.c_str();}
          
         | multiplicative_expression MINUS expression
          {std::string code = ""; std::string tmp = Temp(); code += "- "; code += tmp; code += ", "; code += $1.name; code += ", "; code += $3.name; std::cout << code << std::endl; $$.name = (char *)tmp.c_str();}
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
                         { std::string code = ""; std::string tmp = Temp(); code += "* "; code += tmp; code += ", "; code += $1.name; code += ", "; code += $3.name; std::cout << code << std::endl; $$.name = (char *)tmp.c_str(); 
                          /*std::string *code = new std::string(); code->append("*"); code->append($1.name); code->append(", "); code->append($3.name); */
                         } 
                        | term DIV term 
                         { std::string code = ""; std::string tmp = Temp(); code += "/ "; code += tmp; code += ", "; code += $1.name; code += ", "; code += $3.name; std::cout << code << std::endl; $$.name = (char *)tmp.c_str(); 
                         /*std::string *code = new std::string(); std::string tmp = Temp(); code->append("*"); code->append(tmp); code->(", "); code->append($3.name); std::cout << code << std::endl; $$.name = (char *)tmp->c_str();*/
                         }
                        | term PER term
                         {std::string code = ""; std::string tmp = Temp(); code += "% "; code += tmp; code += ", "; code += $1.name; code += ", "; code += $3.name; std::cout << code << std::endl; $$.name = (char *)tmp.c_str();}
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
     {std::string code = ""; code += $1.name; code += ("("); char ch [1024]; sprintf(ch, "%d", $3.val); code += ch; code += (") "); $$.name = (char *)(code.c_str());}
    | var 
    {$$.name = $1.name;}
    | NUMBER 
      {$$.val = $1.val;} 
    | L_PAREN expressions R_PAREN
    {std::string code = ""; code += "("; char ch [1024]; sprintf(ch, "%d", $2.val); code += ch; code += ") "; $$.name = (char *)code.c_str();}
    | MINUS var
    {printf("term->MINUS var\n");}
    | MINUS NUMBER 
    {std::string code = ""; code += "-"; char ch [1024]; sprintf(ch, "%d", $2.val); code += ch; $$.name = (char *)code.c_str();}
    | MINUS L_PAREN expressions R_PAREN
    {std::string code = ""; code += "-"; code += "("; char ch [1024]; sprintf(ch, "%d", $3.val); code += ch; code += ") "; $$.name = (char *)code.c_str();}
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
};
   
