#ifndef LISTASOCIOS_H
#define LISTASOCIOS_H

#include "NodoSocios.h"
#include "Personas.h"

class ListaSocios {
private:
	NodoSocios *act;
	NodoSocios *prim;
public:
	ListaSocios();
	void setActual(NodoSocios *actual);
	void setPrimero(NodoSocios *primero);
	NodoSocios *getActual()const;
	NodoSocios *getPrimero()const;
	virtual ~ListaSocios();
	string toString();
	void insertarFinal(Personas &_socio);
	bool eliminarFinal();
    bool eliminarPorId(int n);
	int totalNodos();

    Personas getSocioPorId(int id);
    string getSocios(string nombreInstrctor);
	bool existeSocioPorId(int cedula);
};

#endif