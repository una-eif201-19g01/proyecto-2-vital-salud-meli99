#include "Instructores.h"
#include "Personas.h"

Instructores::Instructores() {
    id = 0;
    listaSocios = new ListaSocios();
}

Instructores::Instructores(int cantidad, int tamano) {
    cantidadSocios = cantidad;
    Instructores::tamano = tamano;
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

int Instructores::getId() {
    return id;
}

void Instructores::setId(int id) {
    Instructores::id = id;
}

string Instructores::getNombre() {
    return nombre;
}

void Instructores::setNombre(string nombre) {
    Instructores::nombre = nombre;
}

int Instructores::getCedula() {
    return cedula;
}

void Instructores::setCedula(int cedula) {
    Instructores::cedula = cedula;
}

string Instructores::getCorreo() {
    return correo;
}

void Instructores::setCorreo(string correo) {
    Instructores::correo = correo;
}

int Instructores::getTelefono() {
    return telefono;
}

void Instructores::setTelefono(int telefono) {
    Instructores::telefono = telefono;
}

void Instructores::asignarSocio(Personas socio) {
    listaSocios->insertarFinal(socio);
}

 string Instructores::buscaSocio(int cedulaSocio) {
     string str = listaSocios->getSocioPorId(cedulaSocio).getnombreSocio();
        return str;
     
 }

string Instructores::toString() {
    string str;

    return (to_string(id) + "\t" + nombre);
}

string Instructores::getSocios(string nombreInstructor) {
    return listaSocios->getSocios(nombreInstructor);
}

Personas Instructores::getSocioPorId(int cedula) {
    return listaSocios->getSocioPorId(cedula);
}

bool Instructores::existeSocioPorId(int cedula) {
    return listaSocios->existeSocioPorId(cedula);
}