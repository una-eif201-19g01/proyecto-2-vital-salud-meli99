#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "Personas.h"
#include "Instructores.h"
#include "ListaInstructores.h"
#include "Grupal.h"
#include "Horario.cpp"

class Interfaz {
    private:
        Instructores *inst;
        ListaInstructores *listaInstructores;
        Grupal grupo;

    public:
        Interfaz();
        void correrInterfaz();
};

#endif

