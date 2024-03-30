all:
	bison -d 1907096.y
	flex 1907096.l
	gcc 1907096.tab.c lex.yy.c -o app -lm
	./app
