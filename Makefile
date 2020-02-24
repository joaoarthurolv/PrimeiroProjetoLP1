all: main

main: menu.o main.c 
	gcc main.c -o main menu.o -W -g -lm

fundo.o: menu.c 
	gcc -c menu.c -W -g -lm

clean:
	rm -f *.o