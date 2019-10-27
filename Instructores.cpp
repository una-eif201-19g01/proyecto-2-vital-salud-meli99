#include "Instructores.h"
#include "Personas.h"

Instructores::Instructores() {
    cantidadSocios = 0;
    tamano = 99;

    for (int i = 0; i<tamano; i++) {
        vectorInstructores[i] = nullptr;
    }
}

Instructores::Instructores(int cantidad, int tamano) {
    cantidadSocios = Instructores::cantidadSocios;
    tamano = Instructores::tamano;

    for (int i = 0; i<tamano; i++) {
        vectorInstructores[i] = nullptr;
    }
}

Instructores::Instructores(int cantidad, int tamano, string vector) {
    Instructores::cantidad = cantidad;
    Instructores::tamano = tamano;
    Instructores::vectorInstructores = vector;
}

int Instructores::getTamano() {
    return tamano;
}

void Instructores::setTamano(int tamano) {
    Instructores::tamano = tamano;
}

int Instructores::getCantidad() {
    return cantidadSocios;
}

void Instructores::setCantidad(int cantidad) {
    Instructores::cantidadSocios = cantidad;
}

void Instructores::asignarSocio(string idSocio) {
    vectorSocios[cantidadSocios] = idSocio;
    cantidadSocios++;
}

void Instructores::addSocio(Persona socio) {
    cantidadSocios++;

    vectorInstructores[cantidadSocios] = socio;
}

// string Instructores::getInstructor() {
//     for (int i = 0; i < tamano; i++) {
//         vectorInstructores[i] = "Nombre: " + nombre + "\nCédula: " + cedula + "\nSocios: ";
//         for (int j = 0; j < cantidadSocios; j++) {
//             socio[]
//         }
//     }
// }


 string Instructores::buscaSocio(int cedulaSocio) {
     for (int i = 0; i < cantidadSocios; i++) {
         if (vectorInstructores[i].getcedulaSocio() == cedulaSocio) {
             return vectorInstructores[i].getnombreSocio();
         }
     }
     return "Socio con esa cedula no existe";
 }

 float Instructores::mejoresPesos() {
     float mayorPerdida = 0;

    for (int i = 0; i < cantidadSocios; i++) {
            int perdidaActual = vectorInstructores[i].getPerdidaGrasa();
            
            if (perdidaActual > mayorPerdida) {
                mayorPerdida = perdidaActual;
            }
         }
     }
     return mayorPerdida;
 }
