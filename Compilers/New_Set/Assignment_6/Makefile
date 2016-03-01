#Mayank Roy 13CS30021 Assignment 6
a.out: y.tab.o lex.yy.o ass6_13CS30021_translator.o ass6_13CS30021_target_translator.o
	g++ -g ass6_13CS30021_translator.o ass6_13CS30021_target_translator.o lex.yy.o y.tab.o -lfl
	# ./a.out < expressiontest.c 
	# ./a.out < declarationtest.c 
	# ./a.out < conditiontest.c 
	# ./a.out < functiontest.c 
	# ./a.out < looptest.c 
	# Above are the individual commands to execute the 5 testing files
	# Each testing file is designed to check different set of rules
lex.yy.c: ass6_13CS30021.l
	flex ass6_13CS30021.l
y.tab.c: ass6_13CS30021.y
	yacc -dtv ass6_13CS30021.y
ass6_13CS30021_target_translator.o: ass6_13CS30021_target_translator.cxx
	g++ -g -c ass6_13CS30021_target_translator.cxx
ass6_13CS30021_translator.o: ass6_13CS30021_translator.cxx
	g++ -g -c ass6_13CS30021_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
	#remove -DYYDEBUG to check only the syntax
clean:
	rm a.out lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_13CS30021_translator.o ass6_13CS30021_target_translator.o ass2_13CS30021.o output.o 


# Make file for output the test code
#output: output.o
output: output.o libass2_13CS30021.a
	gcc -g -m64 output.o -o output -L. -lass2_13CS30021
output.o: output.s myl.h
	gcc -g -Wall -m64 -c output.s

libass2_13CS30021.a: ass2_13CS30021.o
	ar -rcs libass2_13CS30021.a ass2_13CS30021.o

ass2_13CS30021.o: ass2_13CS30021.c myl.h
	gcc -Wall -m64 -c ass2_13CS30021.c

#Test files
test1: ass6_13CS30021_test1.o libass2_13CS30021.a
	gcc -g -m64 ass6_13CS30021_test1.o -o test1 -L. -lass2_13CS30021
ass6_13CS30021_test1.o: ass6_13CS30021_test1.s myl.h
	gcc -g -Wall -m64 -c ass6_13CS30021_test1.s

test2: ass6_13CS30021_test2.o libass2_13CS30021.a
	gcc -g -m64 ass6_13CS30021_test2.o -o test2 -L. -lass2_13CS30021
ass6_13CS30021_test2.o: ass6_13CS30021_test2.s myl.h
	gcc -g -Wall -m64 -c ass6_13CS30021_test2.s


test3: ass6_13CS30021_test3.o libass2_13CS30021.a
	gcc -g -m64 ass6_13CS30021_test3.o -o test3 -L. -lass2_13CS30021
ass6_13CS30021_test3.o: ass6_13CS30021_test3.s myl.h
	gcc -g -Wall -m64 -c ass6_13CS30021_test3.s


test4: ass6_13CS30021_test4.o libass2_13CS30021.a
	gcc -g -m64 ass6_13CS30021_test4.o -o test4 -L. -lass2_13CS30021
ass6_13CS30021_test4.o: ass6_13CS30021_test4.s myl.h
	gcc -g -Wall -m64 -c ass6_13CS30021_test4.s


test5: ass6_13CS30021_test5.o libass2_13CS30021.a
	gcc -g -m64 ass6_13CS30021_test5.o -o test5 -L. -lass2_13CS30021
ass6_13CS30021_test5.o: ass6_13CS30021_test5.s myl.h
	gcc -g -Wall -m64 -c ass6_13CS30021_test5.s

