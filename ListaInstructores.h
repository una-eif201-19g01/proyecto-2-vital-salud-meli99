#ifndef LISTAINSTRUCORES_H
#define LISTAINSTRUCORES_H

#include "Nodo.h"
#include "Personas.h"

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
	bool insertarSocioPorId(int n, Personas socio);
	int totalNodos();

	string getListaSocios();
	string getListaInstructores();
	Personas getSocioPorId(int cedula);
	string getListaSociosPorInstructor(int id);
	Instructores getInstrictorPorIdSocio(int id);
	// string mejoresResultadosPerdidaGrasa();
};

#endif