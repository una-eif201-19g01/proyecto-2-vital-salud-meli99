#include "NodoSalones.h"

NodoSalones::NodoSalones() {
    next = nullptr;
}

NodoSalones::NodoSalones(const Salones& rutina, NodoSalones* Next) {
    NodoSalones::next = Next;
    NodoSalones::salon = rutina;
}

void NodoSalones::setNext(NodoSalones *next) {
    NodoSalones::next = next;
}

void NodoSalones::setSalones(const Salones &instructor) {
    NodoSalones::salon = instructor;
}

NodoSalones* NodoSalones::getNext() const {
	return next;
}

Salones& NodoSalones::getSalones() {
	return salon;
}