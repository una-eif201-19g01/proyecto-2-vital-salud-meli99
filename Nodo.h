#ifndef NODO_H
#define NODO_H

#include "Instructores.h"

using namespace std;
class Nodo {
	Nodo* next;
	Instructores instructor;
public:
	Nodo();
	Nodo(const Instructores& instructor, Nodo* Next);
	Nodo(const Personas& socio, Nodo* Next);
	void setNext(Nodo *next);
	void setInstructor(const Instructores &instructor);
	void setSocio(const Personas &socio);
	Nodo *getNext() const;
	Instructores &getInstructor();
	string toString();
}; 

#endif 