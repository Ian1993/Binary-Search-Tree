CC=g++

DEBUG=-g

TARGET=BST

CFLAGS= -c -Wall $(DEBUG)


all: $(TARGET)

$(TARGET): main.o node.o bst.o
	   $(CC) main.o node.o bst.o  -o $(TARGET)

main.o: main.cpp node.h bst.h
	$(CC) $(CFLAGS) main.cpp

inventory.o: node.cpp node.h bst.cpp bst.h
	$(CC) $(CFLAGS) node.cpp bst.cpp

clean:
	rm *.o $(TARGET)
	rm *~
