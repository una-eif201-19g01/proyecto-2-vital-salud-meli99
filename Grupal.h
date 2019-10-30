#ifndef GRUPAL_H
#define GRUPAL_H

#include<string>
#include "Horario.cpp"
using namespace std;

class Grupal{
    private:
    Coleccion *horario;
        string nombre;
        string Instructor;
        char Salon;
        string Horario;

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
    
         string toStringGrupal();
         string crearGrupal(char Dia, int hora);

};

#endif