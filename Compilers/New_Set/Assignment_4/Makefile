all: a.out

a.out: lex.yy.c y.tab.c ass4_13CS30021.o
	gcc lex.yy.c y.tab.c ass4_13CS30021.o -lfl

lex.yy.c: ass4_13CS30021.l
	flex ass4_13CS30021.l

y.tab.c: ass4_13CS30021.y
	yacc -dtv ass4_13CS30021.y

ass3_12CS30044.o: ass4_13CS30021.c
	gcc -c ass4_13CS30021.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass4_13CS30021.o

test: 
	./a.out < ass4_13CS30021_test.c 
