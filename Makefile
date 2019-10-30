Gimnasio: main.o Instructores.o Interfaz.o Personas.o Nodo.o ListaInstructores.o
	g++ -g -std=c++11 -Wall main.o Instructores.o Interfaz.o Personas.o Nodo.o ListaInstructores.o -o Gimnasio

main.o: Interfaz.h main.cpp
	g++ -g -std=c++11 -Wall -c main.cpp

Instructores.o: Instructores.cpp
	g++ -g -std=c++11 -Wall -c Instructores.cpp

Interfaz.o: Interfaz.cpp
	g++ -g -std=c++11 -Wall -c Interfaz.cpp

Personas.o: Personas.cpp
	g++ -g -std=c++11 -Wall -c Personas.cpp

Nodo.o: Nodo.cpp
	g++ -g -std=c++11 -Wall -c Nodo.cpp

ListaInstructores.o: ListaInstructores.cpp
	g++ -g -std=c++11 -Wall -c ListaInstructores.cpp

clean:
	rm *.o Gimnasio
