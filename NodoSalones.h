#ifndef NODO_SALONES_H
#define NODO_SALONES_H

#include "Salones.h"

using namespace std;
class NodoSalones {
	NodoSalones* next;
	Salones salon;
public:
	NodoSalones();
	NodoSalones(const Salones& salon, NodoSalones* Next);
	void setNext(NodoSalones *next);
	void setSalones(const Salones &salon);
	NodoSalones *getNext() const;
	Salones &getSalones();
	// string toString();
}; 

#endif 