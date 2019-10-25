#ifndef INSTRUCTORES_H
#define INSTRUCTORES_H

#include<iostream>
using namespace std;

class Instructores{
    private:
     int tamano;
        int cantidadSocios;
        string vectorInstructores; 
        string vectorSocios;
        string nombre;
        string cedula;
        Persona *per;

    public:
        Instructores();
        Instructores(int cantidad, int tamano);
        Instructores(int cantidad, int tamano, string vector);
        string toString();
        string getInstructor()

       

        int getTamano();
        void setTamano(int tamano);
        int getCantidad();
        void setCantidad(int cantidad);
        void asignarSocio(string idSocio);

        string buscaSocio(int cedulaSocio);
        // recorre el arreglo a ver si el nombre de la persona se encuentra o no, en caso de no encontrarse 
        // le pone que no existe
        string mejoresPesos();
        //si por ejemplo hay dos arreglos, busca en los dos las mejores perdidas de peso, y 
        //muestra el que tenga resultados mas bajos :)
        //hay un metodo en Personas que muestra la perdida de peso 

};

#endif