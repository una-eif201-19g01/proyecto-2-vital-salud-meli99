#ifndef RUTINAS_H
#define RUTINAS_H

#include <iostream>
#include <sstream> 
using namespace std;

class Rutina{
  private:
    float fechaInicio;
    float fechaVencimiento;
    int codigo;
    string objetivo;
    int parteCuerpo;
    string nombreEjercicio;
    int series;
    int repeticiones;

 public:
         Rutina();
       
       //set & get
void setfechaInicio(float fechaInicio);
float getfechaInicio();

void setfechaVencimiento(float fechaVencimiento);
float getfechaVencimiento();

void setobjetivo(string objetivo);
string getobjetivo();

void setparteCuerpo(int parteCuerpo);
int getparteCuerpo();

void setnombreEjercicio(string nombreEjercicio);
string getnombreEjercicio();

void setseries(int series);
int getseries();

void setrepeticiones(int repeticiones);
int getrepeticiones(); 

int getCodigo();
void setCodigo(int codigo); 

        

    //metodos
        bool AumentarDiminuirMasa(int numero);
        string toStringRutina();
        int asignaRutina();
        void agregaCodigo();
        string vencimientoRutinas(float fechaActual);
};
#endif