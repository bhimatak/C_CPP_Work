CC=g++

all: firstCPP p1 p2 p3 p4 p5

firstCPP: firstCPP.cpp 
		$(CC) -o firstCPP firstCPP.cpp

p1: p1.cpp p1.h
		$(CC) -o p1 p1.cpp

p2: p2.cpp
		$(CC) -o p2 p2.cpp

p3: p3.cpp
		$(CC) -o p3 p3.cpp

p4: p4.cpp
		$(CC) -o p4 p4.cpp

p5: p5.cpp
		$(CC) -o p5 p5.cpp


clean:
	@echo "Cleaning...."
	rm -rf a.out firstCPP p1 p2 p3 p4
	rm -rf p5