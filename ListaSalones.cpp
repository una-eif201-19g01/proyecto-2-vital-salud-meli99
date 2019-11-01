#include "ListaSalones.h"

ListaSalones::ListaSalones(){
	primero=nullptr;
	actual=nullptr;
}

void ListaSalones::setActual(NodoSalones *actual){
	ListaSalones::actual=actual;
}

void ListaSalones::setPrimero(NodoSalones *primero){
	ListaSalones::primero=primero;
}

NodoSalones *ListaSalones::getActual()const{
	return actual;
}

NodoSalones *ListaSalones::getPrimero()const{
	return primero;
}

ListaSalones::~ListaSalones(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

void ListaSalones::insertarFinal(Salones &_salon){
 	actual = primero;
    if (primero == nullptr) {
        primero = new NodoSalones(_salon, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new NodoSalones(_salon, nullptr));
    }
}

bool ListaSalones::eliminarFinal() {
	actual=primero;
	if(primero==nullptr){
		return false;
	} else if (primero->getNext() == nullptr) {
		delete primero;
	} else {
		NodoSalones* penultimo = actual; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}

string ListaSalones::toString(){
	// string informe;
	// actual=primero;
	// while (actual!=nullptr){
	// 	informe+=actual->toString();
	// 	actual=actual->getNext();
	// }
	// return informe;
}

int ListaSalones::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}

string ListaSalones::getListaSociosPorInstructor(int id) {
	string str;
	actual = primero;

	// while (actual!=nullptr){
	// 	if (actual->getRutina().getCedula() == id) {
	// 		str+=actual->getRutina().getSocios(actual->getRutina().getNombre());
	// 	}
	// 	actual=actual->getNext();

	// }
	return str;
}

string ListaSalones::toStringGetRutinas(){
	string str;
	actual = primero;

	while(actual!=nullptr){
		
		actual=actual->getNext();
	}
	return str;
}