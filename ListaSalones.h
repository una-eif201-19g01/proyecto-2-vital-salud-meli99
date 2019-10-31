#ifndef LISTASALONES_H
#define LISTASALONES_H

#include "NodoSalones.h"
#include "Salones.h"

using namespace std;

class ListaSalones {
	NodoSalones *actual;
	NodoSalones *primero;
public:
	ListaSalones();
	void setActual(NodoSalones *actual);
	void setPrimero(NodoSalones *primero);
	NodoSalones *getActual()const;
	NodoSalones *getPrimero()const;
	virtual ~ListaSalones();
	string toString();
	void insertarFinal(Salones &_salon);
	bool eliminarFinal();
    bool eliminarPorId(int n);
	int totalNodos();

	string getListaSocios();
	string getListaInstructores();
	string getListaSociosPorInstructor(int id);
};

#endif