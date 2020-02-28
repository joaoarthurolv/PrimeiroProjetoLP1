all: main

main: menuPrincipal.o menuConta.o main.c 
	gcc main.c -o main menuPrincipal.o menuConta.o -W -g -lm

menuPrincipal.o: menuPrincipal.c 
	gcc -c menuPrincipal.c -W -g -lm

menuConta.o: menuConta.c 
	gcc -c menuConta.c -W -g -lm

clean:
	rm -f *.o