all: Sorting
 
Sorting: main.o func.o
	gcc main.o func.o -o Sorting -lm -ggdb3  -fsanitize=address
main.o: main.c
	gcc -c main.c -o main.o -lm -ggdb3 -fsanitize=address

func.o: func.c
	gcc -c func.c -o func.o -lm -ggdb3 -fsanitize=address