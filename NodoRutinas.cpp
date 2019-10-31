#include "NodoRutinas.h"

NodoRutinas::NodoRutinas() {
    next = nullptr;
}

NodoRutinas::NodoRutinas(const Rutina& rutina, NodoRutinas* Next) {
    NodoRutinas::next = Next;
    NodoRutinas::rutina = rutina;
}

void NodoRutinas::setNext(NodoRutinas *next) {
    NodoRutinas::next = next;
}

void NodoRutinas::setRutina(const Rutina &instructor) {
    NodoRutinas::rutina = instructor;
}

NodoRutinas* NodoRutinas::getNext() const {
	return next;
}

Rutina& NodoRutinas::getRutina() {
	return rutina;
}