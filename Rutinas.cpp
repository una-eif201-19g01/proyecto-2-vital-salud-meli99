#include "Rutinas.h"

Rutina::Rutina(){
    codigo=0;
    fechaInicio=0;
    fechaVencimiento=0;
    repeticiones=0;
    series=0;
    parteCuerpo=0;
    objetivo="_";
    nombreEjercicio="_";
}
    
void Rutina::setfechaInicio(float fechaInicio){
    Rutina::fechaInicio=fechaInicio;
}
float Rutina::getfechaInicio(){
    reutnr fechaInicio;
}
void Rutina::setfechaVencimiento(float fechaVencimiento){
    Rutina::fechaVencimiento=fechaVencimiento;
}
float Rutina::getfechaVencimiento(){
    return fechaVencimiento
}
void Rutina::setobjetivo(string objetivo){
Rutina::objetivo=objetivo;
}
string Rutina::getobjetivo(){
    return objetivo;
}
void Rutina::setparteCuerpo(int parteCuerpo){
Rutina::parteCuerpo=parteCuerpo;
}
int Rutina::getparteCuerpo(){
    return parteCuerpo;
}
void Rutina::setnombreEjercicio(string nombreEjercicio){
Rutina::nombreEjercicio=nombreEjercicio;
}
string Rutina::getnombreEjercicio(){
    return nombreEjercicio;
}
void Rutina::setseries(int series){
Rutina:: series=series;
}
int Rutina::getseries(){
    return series;
}
void Rutina::setrepeticiones(int repeticiones){
Rutina::repeticiones=repeticiones;
}
int Rutina::getrepeticiones(){
    return repeticiones;
}  

int getCodigo(){
    codigo = codigo + 1;
    return codigo;
}
void setCodigo(int codigo){
    Rutina::Codigo=codigo;
} 

        

    //metodos

    int Rutina::asignaRutina(){
        int num;
        int c;
        srand(time(NULL));
        for(c = 1; c <= 30; c++){
        num = 1 + rand() % (31 - 1);
        }
        return num;
        }

    void Rutina::agregaCodigo(){
           if(asignaRutina==num){
               set.Codigo(num);
            }
        }
        bool Rutina::AumentarDiminuirMasa(int numero){
            if(numero==1){
                return true;
            }else{
                return false;
            }
        }
        string Rutina::toStringRutina(){
            stringstream e;
            e<<"El codigo de esta rutina es :"<<codigo<<endl;
            e<<"La fecha de Inicio es de :"<<fechaInicio<<endl;
            e<<"La fecha de Vencimiento es de :"<<fechaVencimiento<<endl;
            e<<"La cantidad de Repeticiones es de :"<<repeticiones<<endl;
            e<<"La cantidad de series es de :"<<series<<endl;
            e<<"El numero de la parte del Cuerpo es :"<<parteCuerpo<<endl;
            e<<"Parte del cuerpo:(1-Pierna, 2-Pecho, 3-espalda, 4-hombro ,5-tríceps, 6-biceps, 7-trapecio, 8-antebrazo)"<<endl
            e<<"El objetivo de esta rutina es :"<<objetivo<<endl;
            e<<"El nombre de Ejercicio es :"<<nombreEjercicio<<endl;
            return e.str();
        }

        string vencimientoRutinas(float fechaActual){
        if(fecha Vencimiento<=fechaActual){
            return codigo;
        }else{
            return "NO ha vencido";
        }
        }

