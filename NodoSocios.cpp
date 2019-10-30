#include "Nodo.h"

Nodo::Nodo() {
    next = nullptr;
}

Nodo::Nodo(const Instructores& veh, Nodo* Next) {
    Nodo::next = Next;
    Nodo::instructor = veh;
}

Nodo::Nodo(const Personas& soc, Nodo* Next) {
    Nodo::next = Next;
    Nodo::socio = soc;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

void Nodo::setInstructor(const Instructores &instructor) {
    Nodo::instructor = instructor;
}

void Nodo::setSocio(const Personas &socio) {
    Nodo::socio = socio;
}

Nodo* Nodo::getNext() const {
	return next;
}

Instructores& Nodo::getInstructor() {
	return instructor;
}

Personas& Nodo::getSocio() {
    return socio;
}

std::string Nodo::toString() {
	return instructor.toString();
}