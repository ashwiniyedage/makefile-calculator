cal : cal.o add.o sub.o
	g++ cal.o add.o sub.o -o cal

cal.o : cal.cpp
	g++ -c cal.cpp

add.o : add.cpp
	g++ -c add.cpp

sub.o : sub.cpp
	g++ -c sub.cpp

clean :
	rm *.o cal
