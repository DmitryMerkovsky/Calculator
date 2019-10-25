all:
	g++ -o gtest gtest.cpp calc.cpp -lgtest -lpthread
all:	gtest
gtest: calc.o gtest.o
	g++ gtest.o	calc.o	-o gtest -lgtest -lpthread
gtest.o:gtest.cpp 
	g++	-c	gtest.cpp 
calc.o:calc.cpp
	g++	-c calc.cpp
clean:
	rm	-rf	*.0 gtest calc.o gtest.o 


