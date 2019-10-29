Gimnasio: main.o Instructores.o Interfaz.o Lecciones.o ListaInstructores.o Nodo.o Personas.o Rutinas.o Salones.o
	g++ -g -std=c++11 -Wall main.o Instructores.o Interfaz.o Lecciones.o ListaInstructores.o Nodo.o Personas.o Rutinas.o Salones.o -o Gimnasio

main.o: Interfaz.h main.cpp
	g++ -g -std=c++11 -Wall -c main.cpp

Instructores.o: Instructores.cpp
	g++ -g -std=c++11 -Wall -c Instructores.cpp

Interfaz.o: Interfaz.cpp
	g++ -g -std=c++11 -Wall -c Interfaz.cpp

Lecciones.o: Lecciones.cpp
	g++ -g -std=c++11 -Wall -c Lecciones.cpp

ListaInstructores.o: ListaInstructores.cpp
	g++ -g -std=c++11 -Wall -c ListaInstructores.cpp

Nodo.o: Nodo.cpp
	g++ -g -std=c++11 -Wall -c Nodo.cpp

Personas.o: Personas.cpp
	g++ -g -std=c++11 -Wall -c Perconas.cpp

Rutinas.o: Rutinas.cpp
	g++ -g -std=c++11 -Wall -c Rutinas.cpp

Salones.o: Salones.cpp
	g++ -g -std=c++11 -Wall -c Salones.cpp

clean:
	rm *.o Gimnasio
