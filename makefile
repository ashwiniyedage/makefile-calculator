cal : cal.o add.o
	g++ cal.o add.o -o cal

cal.o : cal.cpp
	g++ -c cal.cpp

add.o : add.cpp
	g++ -c add.cpp

clean :
	rm *.o cal
