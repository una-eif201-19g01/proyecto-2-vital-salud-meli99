#ifndef INSTRUCTORES_H
#define INSTRUCTORES_H

#include<iostream>
#include "Personas.h"
using namespace std;

class Instructores : public Personas{
    public:
        Instructores();
        Instructores(int cantidad, int tamano);
        Instructores(int cantidad, int tamano, int vector);
        string toString();

    private:
        int tamano;
        int cantidad;
        string vector; 

        int getTamano();
        void setTamano(int tamano);
        int getCantidad();
        void setCantidad(int cantidad);
        void asignarSocio(string idSocio);
};

#endif