#ifndef LISTARUTINAS_H
#define LISTARUTINAS_H

#include "NodoRutinas.h"
#include "Rutinas.h"

using namespace std;

class ListaRutinas {
	NodoRutinas *actual;
	NodoRutinas *primero;
public:
	ListaRutinas();
	void setActual(NodoRutinas *actual);
	void setPrimero(NodoRutinas *primero);
	NodoRutinas *getActual()const;
	NodoRutinas *getPrimero()const;
	virtual ~ListaRutinas();
	string toString();
	void insertarFinal(Rutina &_rutina);
	bool eliminarFinal();
    bool eliminarPorId(int n);
	int totalNodos();

	string getListaSocios();
	string getListaInstructores();
	string getListaSociosPorInstructor(int id);
	// string mejoresResultadosPerdidaGrasa();
};

#endif