#ifndef GRUPAL_H
#define GRUPAL_H

#include<string>
#include "Horario.cpp"
#include "Personas.h"
// #include "ListaSocios.h"
using namespace std;

class Grupal{
    private:
    char grupo[10];
    int cantidad;
    int tamano;

    Coleccion *horario;
        string nombre;
        string Instructor;
        char Salon;
        string Horario;
        ListaSocios* socios;

    public:
        Grupal();
       
        string getInstructor();
        void setInstructor(string Insrtructor);
        string getNombre();
        void setNombre(string Nombre);
        char getSalon();
        void setSalon(char Salon);
        string getHorario();
        void setHorario(string Horario);
        

        Grupal();
        Grupal(int n);
        ~Grupal();
        void setCantidad(int can);
        int getCantidad();
        int getTamano();
        void insertarSocio(string nombreSocio);
        string toStringVectorGrupal();
    
         string toStringGrupal();
         string crearGrupal(char Dia, int hora);

};

#endif