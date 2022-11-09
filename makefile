all: BST

BST: Main.o BST.o
	g++ Main.o BST.o -o BST

Main.o: Main.cpp
	g++ -c Main.cpp

BST.o: BST.cpp BST.h
	g++ -c BST.cpp

clean:
	rm -f *.o BST