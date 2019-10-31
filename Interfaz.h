#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "Personas.h"
// #include "Instructores.h"
#include "ListaInstructores.h"
// #include "ListaSocios.h"
// #include "Grupal.h"
// #include "Horario.cpp"
#include "Rutinas.h"

class Interfaz {
    private:
        // Instructores *inst;
        ListaInstructores *listaInstructores;
        // Grupal grupo;
        // Rutina rutinario;
         Personas socio;

    public:
        Interfaz();
        void correrInterfaz();
};

#endif

