#include "NodoSocios.h"

NodoSocios::NodoSocios() {
    next = nullptr;
}

NodoSocios::NodoSocios(const Personas& soc, NodoSocios* Next) {
    NodoSocios::next = Next;
    NodoSocios::socio = soc;
}

void NodoSocios::setNext(NodoSocios *next) {
    NodoSocios::next = next;
}

void NodoSocios::setSocio(const Personas &socio) {
    NodoSocios::socio = socio;
}

NodoSocios* NodoSocios::getNext() const {
	return next;
}

Personas& NodoSocios::getSocio() {
    return socio;
}
