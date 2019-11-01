#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "Personas.h"
#include "ListaInstructores.h"
#include "Grupal.h"
#include "Horario.cpp"
#include "Rutinas.h"

class Interfaz {
    private:
        ListaInstructores *listaInstructores;
        Grupal *grupo;
        Personas socio;

    public:
        Interfaz();
        void correrInterfaz();
};

#endif

