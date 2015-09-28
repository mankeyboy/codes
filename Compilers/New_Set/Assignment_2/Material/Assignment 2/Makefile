a.out: ass2_13CS30024.o main.o
	cc main.o ass2_13CS30024.o
ass2_13CS30024.o: ass2_13CS30024.c myl.h
	cc -Wall -c ass2_13CS30024.c
main.o: myl.h main.c
	cc -Wall -c main.c
clean: 
	rm a.out main.o ass2_13CS30024.o