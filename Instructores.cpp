#include "Instructores.h"
#include "Personas.h"

Instructores::Instructores() {
    cantidad = 0;
    tamano = 99;

    for (int i = 0; i<tamano; i++) {
        vector[i] = "";
    }
}

Instructores::Instructores(int cantidad, int tamano) {
    cantidad = Instructores::cantidad;
    tamano = Instructores::tamano;

    for (int i = 0; i<tamano; i++) {
        vector[i] = "";
    }
}

Instructores::Instructores(int cantidad, int tamano, string vector) {
    Instructores::cantidad = cantidad;
    Instructores::tamano = tamano;
    Instructores::vector = vector;
}

int Instructores::getTamano() {
    return tamano;
}

void Instructores::setTamano(int tamano) {
    Instructores::tamano = tamano;
}

int Instructores::getCantidad() {
    return cantidad;
}

void Instructores::setCantidad(int cantidad) {
    Instructores::cantidad = cantidad;
}

void Instructores::asignarSocio(string idSocio) {
    vector[cantidad] = idSocio;
    cantidad++;
}
