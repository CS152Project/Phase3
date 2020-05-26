parser: 
	bison -v -d --file-prefix=parser calc.y
	flex mini_l.lex
	gcc -o parser parser.tab.c lex.yy.c -lfl

clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser 
