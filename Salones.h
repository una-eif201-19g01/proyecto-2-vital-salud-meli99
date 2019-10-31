#ifndef SALONES_H
#define SALONES_H

#include<iostream>
#include "Horario.cpp"
using namespace std;

class Salones{
   private:
        string nombreSalon;
        int codigo;
        int capacidad;
        
 public:
 //hacer una lista de salones.
       Personas();      

        void setnombreSalon(string nombreSalon);
        string getnombreSalon();

        void setcodigo(int codigo);
        int getcodigo();

        void setcapacidad(int capacidad);
        int getcapacidad();

    //metodos
        string toStringSalones();
};
#endif