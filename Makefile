CFLAGS = -g -Wall -ansi -pedantic

parser: mini_l.lex calc.y	
	bison -v -d --file-prefix=parser calc.y
	g++ -c parser.tab.c -lfl -o parser.tab.o 
	flex mini_l.lex
	g++ -c lex.yy.c -o lex.yy.o
	g++ $(CFLAGS) -std=c++11 lex.yy.o parser.tab.o -o parser  

clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser

