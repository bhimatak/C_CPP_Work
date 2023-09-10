CC = g++
CFLAGS = -g -w -Wall

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o

test_unit: test_unit.o util.o
	$(CC) $(CFLAGS) -o test_unit test_unit.o util.o

test_unit.o: test_unit.cpp
	$(CC) $(CFLAGS) -c test_unit.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

util.o: util.cpp util.hpp
	$(CC) $(CFLAGS) -c util.cpp

clean:
	@echo "Cleaning....."
	rm -f core a.out *.o main

