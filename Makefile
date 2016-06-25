lista02.exe : bubble.o insertition.o selection.o quicksort.o utilitarios.o lista02.o
	gcc -o lista02 bubble.o insertition.o selection.o quicksort.o utilitarios.o lista02.o
	
lista02.o : lista02.c
	gcc -c lista02.c
	
clean :
	rm *.o
	
all : lista02.exe