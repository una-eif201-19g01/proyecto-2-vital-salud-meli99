#ifndef INSTRUCTORES_H
#define INSTRUCTORES_H

#include<string>
#include "ListaSocios.h"
using namespace std;

class Instructores{
    private:
        int tamano;
        int cantidadSocios;
        ListaSocios *listaSocios;
        string nombre;
        int id;
        int cedula;
        string correo;
        int telefono;
    public:
        Instructores();
        Instructores(int cantidad, int tamano);
        Instructores(int cantidad, int tamano, string vector);
        string toString();
        string getInstructor();
        string getSocios(string nombreInstructor);


       
        int getId();
        void setId(int id);
        string getNombre();
        void setNombre(string nombre);
        int getCedula();
        void setCedula(int cedula);
        string getCorreo();
        void setCorreo(string correo);
        int getTelefono();
        void setTelefono(int telefono);
        int getTamano();
        void setTamano(int tamano);
        int getCantidad();
        void setCantidad(int cantidad);
        void asignarSocio(Personas socio);
        Personas getSocioPorId(int cedula);
        bool existeSocioPorId(int cedula);
        
        string buscaSocio(int cedulaSocio);
      


};

#endif