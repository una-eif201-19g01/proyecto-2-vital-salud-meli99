#include "ListaSocios.h"

ListaSocios::ListaSocios(){
	primero=nullptr;
	actual=nullptr;
}

void ListaSocios::setActual(Nodo *actual){
	ListaSocios::actual=actual;
}

void ListaSocios::setPrimero(Nodo *primero){
	ListaSocios::primero=primero;
}

Nodo *ListaSocios::getActual()const{
	return actual;
}

Nodo *ListaSocios::getPrimero()const{
	return primero;
}

ListaSocios::~ListaSocios(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

void ListaSocios::insertarFinal(Personas &_socio){
 	actual = primero;
    if (primero == nullptr) {
        primero = new Nodo(_socio, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new Nodo(_socio, nullptr));
    }
}

bool ListaSocios::eliminarFinal() {
	actual=primero;
	if(primero==nullptr){
		return false;
	} else if (primero->getNext() == nullptr) {
		delete primero;
	} else {
		Nodo* penultimo = actual; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}

string ListaSocios::toString(){
	string informe;
	actual=primero;
	while (actual!=nullptr){
		informe+=actual->toString();
		actual=actual->getNext();
	}
	return informe;
}

int ListaSocios::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}

Personas ListaSocios::getSocioPorId(int id) {
    actual = primero;

    while(actual!=nullptr) {
        if(actual->getSocio().getcedulaSocio() == id) {
            return actual->getSocio();
        }
        actual = actual->getNext();
    }
}

 string ListaSocios::getSocios(string nombreInstrctor) {
     actual = primero;
     string str = "";

    while(actual!=nullptr) {
        str += to_string(actual->getSocio().getcedulaSocio()) + "\t" +  actual->getSocio().getnombreSocio() + "\t" + nombreInstrctor + "\n"; 
        actual = actual->getNext();
    }
 }