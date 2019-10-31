#include "Nodo.h"

Nodo::Nodo() {
    next = nullptr;
}

Nodo::Nodo(const Instructores& veh, Nodo* Next) {
    Nodo::next = Next;
    Nodo::instructor = veh;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

void Nodo::setInstructor(const Instructores &instructor) {
    Nodo::instructor = instructor;
}

Nodo* Nodo::getNext() const {
	return next;
}

Instructores& Nodo::getInstructor() {
	return instructor;
}

std::string Nodo::toString() {
	return instructor.toString();
}