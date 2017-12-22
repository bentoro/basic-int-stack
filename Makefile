CC=g++
CFLAGS=-c -Wall

all: intstack

lab2: intstack.o basic_int_stack.o
	$(CC) intstack.o basic_int_stack.o -o intstack

lab2.o: intstack.cpp
	$(CC) $(CFLAGS) intstack.cpp

basic_int_stack.o: basic_int_stack.cpp
	$(CC) $(CFLAGS) basic_int_stack.cpp

clean:
	rm *o intstack
