#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "Personas.h"
#include "Instructores.h"
#include "ListaInstructores.h"

class Interfaz {
    private:
        Instructores *inst;
        ListaInstructores *listaInstructores;

    public:
        Interfaz();
        void correrInterfaz();
};

#endif

