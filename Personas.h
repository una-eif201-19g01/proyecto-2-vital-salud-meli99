#ifndef PERSONAS_H
#define PERSONAS_H

#include<iostream>
using namespace std;

class Personas{
   private:
        float altura;
        float porcentajeGrasa;
        string nombreSocio;
        int cedulaSocio;
        string correoSocio;
        int telefonoSocio;
        float fechaInscripcionSocio;
        int pesoSocio;
        int masaCorporalSocio;
        int masaMuscularSocio;
        float perdidaDeGrasa;
 public:
       Personas();  

       void setporcentajeGrasa(float porcentajeGrasa);
       float getporcentajeGrasa();

       void setaltura(float altura);
       float getaltura();

        void setnombreSocio(string nombreSocio);
        string getnombreSocio();

        void setcedulaSocio(int cedulaSocio);
        int getcedulaSocio();

        void setcorreoSocio(string correoSocio);
        string getcorreoSocio();

        void settelefonoSocio(int telefonoSocio);
        int gettelefonoSocio();

        void setfechaInscripcionSocio(float fechaInscripcionSocio);
        float getfechaInscripcionSocio();

        void setpesoSocio(int pesoSocio);
        int getpesoSocio();

        void setmasaCorporalSocio(int masaCorporalSocio);
        int getmasaCorporalSocio();

        void setmasaMuscularSocio(int masaMuscularSocio);
        int getmasaMuscularSocio();

        float getPerdidaGrasa();
        

    //metodos
        string toString();
        float perdidaGrasa(int pesoActual);
        string getSociosPorInstructor(string nombreInstructor);
};
#endif