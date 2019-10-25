#ifndef INSTRUCTORES_H
#define INSTRUCTORES_H

#include<iostream>
using namespace std;

class Instructores{
    public:
        Instructores();
        Instructores(int cantidad, int tamano);
        Instructores(int cantidad, int tamano, string vector);
        string toString();
        string getInstructor()

        int tamano;
        int cantidadSocios;
        string vectorInstructores; 
        string vectorSocios;
        string nombre;
        string cedula;

        int getTamano();
        void setTamano(int tamano);
        int getCantidad();
        void setCantidad(int cantidad);
        void asignarSocio(string idSocio);
};

#endif