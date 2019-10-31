#ifndef NODO_RUTINAS_H
#define NODO_RUTINAS_H

#include "Rutinas.h"

using namespace std;
class NodoRutinas {
	NodoRutinas* next;
	Rutina rutina;
public:
	NodoRutinas();
	NodoRutinas(const Rutina& rutina, NodoRutinas* Next);
	void setNext(NodoRutinas *next);
	void setRutina(const Rutina &rutina);
	NodoRutinas *getNext() const;
	Rutina &getRutina();
	// string toString();
}; 

#endif 