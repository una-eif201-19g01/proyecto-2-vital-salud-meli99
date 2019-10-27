#ifndef LISTAINSTRUCORES_H
#define LISTAINSTRUCORES_H

#include "Nodo.h"

using namespace std;

class ListaInstructores {
	Nodo *actual;
	Nodo *primero;
public:
	ListaInstructores();
	void setActual(Nodo *actual);
	void setPrimero(Nodo *primero);
	Nodo *getActual()const;
	Nodo *getPrimero()const;
	virtual ~ListaInstructores();
	string toString();
	void insertarFinal(Instructores &_instructor);
	bool eliminarFinal();
	string obtenerDatosVehiculo(int);
    bool eliminarPorId(int n);
	int totalNodos();
};

#endif