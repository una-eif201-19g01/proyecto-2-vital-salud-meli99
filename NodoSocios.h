#ifndef NODO_SOCIOS_H
#define NODO_SOCIOS_H

#include "Personas.h"

class NodoSocios {
	NodoSocios* next;
	Personas socio;
public:
	NodoSocios();
	NodoSocios(const Personas& socio, NodoSocios* Next);
	void setNext(NodoSocios *next);
	void setSocio(const Personas &socio);
	NodoSocios *getNext() const;
	Personas &getSocio();
};

#endif 