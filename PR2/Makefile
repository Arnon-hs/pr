all:
	gcc Main.c 
	./a.exe
ListTest:
	gcc List.c
Test:
	gcc -c List.c Menu.c Main.c

binary: main.o liblist.a
	gcc -o binary main.o -L. -llist

main.o: Main.c
	gcc -c Main.c

liblist.a: list.o 
	ar cr liblist.a list.o 

list.o: List.c
	gcc -c List.c

clean:
	rm -f *.o *.a binary


binaryDyn: main.o liblist.so
	gcc -o binary main.o -L. -llist -Wl,-rpath,.

main.oDyn: Main.c
	gcc -c Main.c

liblist.so: list.o 
	gcc -shared -o liblist.so list.o 

