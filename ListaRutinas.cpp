#include "ListaRutinas.h"

ListaRutinas::ListaRutinas(){
	primero=nullptr;
	actual=nullptr;
}

void ListaRutinas::setActual(NodoRutinas *actual){
	ListaRutinas::actual=actual;
}

void ListaRutinas::setPrimero(NodoRutinas *primero){
	ListaRutinas::primero=primero;
}

NodoRutinas *ListaRutinas::getActual()const{
	return actual;
}

NodoRutinas *ListaRutinas::getPrimero()const{
	return primero;
}

ListaRutinas::~ListaRutinas(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

void ListaRutinas::insertarFinal(Rutina &_rutina){
 	actual = primero;
    if (primero == nullptr) {
        primero = new NodoRutinas(_rutina, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new NodoRutinas(_rutina, nullptr));
    }
}

bool ListaRutinas::eliminarFinal() {
	actual=primero;
	if(primero==nullptr){
		return false;
	} else if (primero->getNext() == nullptr) {
		delete primero;
	} else {
		NodoRutinas* penultimo = actual; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}

string ListaRutinas::toString(){
	// string informe;
	// actual=primero;
	// while (actual!=nullptr){
	// 	informe+=actual->toString();
	// 	actual=actual->getNext();
	// }
	// return informe;
}

int ListaRutinas::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}

// bool ListaRutinas::insertarSocioPorId(int n, Personas socio){
//     actual = primero;
// 	//lista vacia
// 	// if (actual == nullptr) {
// 	// 	return false;
// 	// }
//     // if(actual->getRutina().getId() == n) {
// 	// 	actual->getRutina().asignarSocio(socio);
// 	// 	return true;
// 	// } 
// 	// else if (actual->getNext() == nullptr) {
//     //     return false;
//     // } else {
//     //     while (actual->getNext() != nullptr) {
// 	// 		actual = actual->getNext();
//     //         if (actual->getRutina().getId() == n) {
//     //             actual->getRutina().asignarSocio(socio);
// 	// 			return true;
//     //         }
            
//     //     }
//     // }
//     return false;
// }


// Rutina ListaRutinas::getSocioPorId(int cedula) {
// 	actual = primero;
// 	while (actual!=nullptr){
// 		if (actual->getRutina().existeSocioPorId(cedula)) {
// 			return actual->getRutina().getSocioPorId(cedula);
// 		}
// 	}
// }

// string ListaRutinas::mejoresResultadosPerdidaGrasa() {
// 	string str = "";
// 	string mejorInstructor = "";
// 	int mejorPerdida = 0;

// 	actual = primero;
// 	while (actual!=nullptr){
// 		if (actual->getRutina().mejoresPesos() > mejorPerdida) {
// 			mejorInstructor = actual->getRutina().getNombre();
// 			mejorPerdida = actual->getRutina().mejoresPesos();
// 		}
// 	}

// 	return mejorInstructor + ": " + to_string(mejorPerdida) + "\n";
// }

string ListaRutinas::getListaSociosPorInstructor(int id) {
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