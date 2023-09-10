all: collegeApp

collegeApp: array3.o config.o
		${CC} -o collegeApp array3.o config.o

config.o: config.c
		${CC} -c config.c

clean:
	@echo "Cleaning..."
	rm -rf config.o *.out


