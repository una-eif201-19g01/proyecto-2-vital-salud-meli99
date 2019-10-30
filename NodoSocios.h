#ifndef NODO_H
#define NODO_H

#include "Instructores.h"
#include "Personas.h"
using namespace std;
class NodoSocios {
	NodoSocios* next;
	Instructores instructor;
	Personas socio;
public:
	NodoSocios();
	NodoSocios(const Instructores& instructor, NodoSocios* Next);
	NodoSocios(const Personas& socio, NodoSocios* Next);
	void setNext(NodoSocios *next);
	void setInstructor(const Instructores &instructor);
	void setSocio(const Personas &socio);
	NodoSocios *getNext() const;
	Instructores &getInstructor();
	Personas &getSocio();
	string toString();
};

#endif 