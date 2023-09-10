CC := gcc

all: dtype hChar

dtype: dtype.o
	${CC} -g -o dtype dtype.o

dtype.o: dtype.c
	${CC} -c -g dtype.c

hChar: hChar.o
	${CC} -g -o hChar hChar.o

hChar.o: hChar.c
	${CC} -c -g hChar.c

clean:
	@echo "Cleaning the files...."
	rm -rvf *.o a.out dtype hChar 

