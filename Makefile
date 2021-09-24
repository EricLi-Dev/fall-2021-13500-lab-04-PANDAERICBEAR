# Starter Makefile
# add .cpp and .h files as specified in each task.

main: main.o funcs.o cross.o checkerboard3x3.o
	g++ -Wall -Werror -o main main.o funcs.o cross.o checkerboard3x3.o

main.o: main.cpp funcs.h cross.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ -c checkerboard3x3.cpp

clean:
	rm -f main.o funcs.o cross.o checkerboard3x3.o
