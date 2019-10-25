#include "Instructores.h"
#include "Personas.h"

Instructores::Instructores() {
    cantidadSocios = 0;
    tamano = 99;

    for (int i = 0; i<tamano; i++) {
        vectorInstructores[i] = "";
    }
}

Instructores::Instructores(int cantidad, int tamano) {
    cantidadSocios = Instructores::cantidadSocios;
    tamano = Instructores::tamano;

    for (int i = 0; i<tamano; i++) {
        vectorInstructores[i] = "";
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

string Instructores::getInstructor() {
    for (int i = 0; i < tamano; i++) {
        vectorInstructores[i] = "Nombre: " + nombre + "\nCédula: " + cedula + "\nSocios: ";
        for (int j = 0; j < cantidadSocios; j++) {
            socio[]
        }
    }
}
