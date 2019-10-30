#ifndef LISTASOCIOS_H
#define LISTASOCIOS_H

#include "Nodo.h"
// #include "Personas.h"

using namespace std;

class ListaSocios {
	Nodo *actual;
	Nodo *primero;
public:
	ListaSocios();
	void setActual(Nodo *actual);
	void setPrimero(Nodo *primero);
	Nodo *getActual()const;
	Nodo *getPrimero()const;
	virtual ~ListaSocios();
	string toString();
	void insertarFinal(Personas &_socio);
	bool eliminarFinal();
    bool eliminarPorId(int n);
	int totalNodos();

    Personas getSocioPorId(int id);
    string getSocios(string nombreInstrctor);
};

#endif