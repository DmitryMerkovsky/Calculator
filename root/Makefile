all:
	g++	-Wall	-Werror main.cpp functions.cpp -o main
all:	main
main: functions.o main.o
	g++ main.o	functions.o	-o main
main.o:main.cpp
	g++	-c	main.cpp
functions.o:functions.cpp
	g++	-c functions.cpp
clean:
	rm	-rf	*.0 main functions.o main.o
