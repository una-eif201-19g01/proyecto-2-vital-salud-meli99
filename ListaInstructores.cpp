#include "ListaInstructores.h"

ListaInstructores::ListaInstructores(){
	primero=nullptr;
	actual=nullptr;
}

void ListaInstructores::setActual(Nodo *actual){
	ListaInstructores::actual=actual;
}

void ListaInstructores::setPrimero(Nodo *primero){
	ListaInstructores::primero=primero;
}

Nodo *ListaInstructores::getActual()const{
	return actual;
}

Nodo *ListaInstructores::getPrimero()const{
	return primero;
}

ListaInstructores::~ListaInstructores(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

void ListaInstructores::insertarFinal(Instructores &_instructor){
 	actual = primero;
    if (primero == nullptr) {
        primero = new Nodo(_instructor, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new Nodo(_instructor, nullptr));
    }
}

bool ListaInstructores::eliminarFinal() {
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

string ListaInstructores::toString(){
	string informe;
	actual=primero;
	while (actual!=nullptr){
		informe+=actual->toString();
		actual=actual->getNext();
	}
	return informe;
}

int ListaInstructores::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}


bool ListaInstructores::insertarSocioPorId(int n, Personas socio){
    actual = primero;
	//lista vacia
	if (actual == nullptr) {
		return false;
	}
    if(actual->getInstructor().getId() == n) {
		actual->getInstructor().asignarSocio(socio);
		return true;
	} 
	else if (actual->getNext() == nullptr) {
        return false;
    } else {
        while (actual->getNext() != nullptr) {
			actual = actual->getNext();
            if (actual->getInstructor().getId() == n) {
                actual->getInstructor().asignarSocio(socio);
				return true;
            }
        }
    }
    return false;
}

string ListaInstructores::getListaInstructores() {
	string str;
	actual=primero;

	while (actual!=nullptr){
		str+=actual->getInstructor().toString();
		str+="\n";
		actual=actual->getNext();
	}
	return str;
}

string ListaInstructores::getListaSocios() {
	string str;
	actual = primero;

	while (actual!=nullptr){
		str+=actual->getInstructor().getSocios(actual->getInstructor().getNombre());
		actual=actual->getNext();
	}
	return str;
}

Personas ListaInstructores::getSocioPorId(int cedula) {
	actual = primero;
	while (actual!=nullptr){
		if (actual->getInstructor().existeSocioPorId(cedula)) {
			return actual->getInstructor().getSocioPorId(cedula);
		}
	}
}

string ListaInstructores::mejoresResultadosPerdidaGrasa() {
	string str = "";
	string mejorInstructor = "";
	int mejorPerdida = 0;

	actual = primero;
	while (actual!=nullptr){
		// if (actual->getInstructor().mejoresPesos() > mejorPerdida) {
			mejorInstructor = actual->getInstructor().getNombre();
			// mejorPerdida = actual->getInstructor().mejoresPesos();
		// }
		actual = actual->getNext();
	}

	return mejorInstructor + ": " + to_string(mejorPerdida) + "\n";
}

string ListaInstructores::getListaSociosPorInstructor(int id) {
	string str;
	actual = primero;

	while (actual!=nullptr){
		if (actual->getInstructor().getCedula() == id) {
			str+=actual->getInstructor().getSocios(actual->getInstructor().getNombre());
		}
		actual=actual->getNext();

	}
	return str;
}

Instructores ListaInstructores::getInstrictorPorIdSocio(int id){
	actual = primero;
	while (actual!=nullptr){
		if (actual->getInstructor().existeSocioPorId(id)) {
			return actual->getInstructor();
		}
	}
}

Instructores ListaInstructores::getInstructorPorIdInstructor(int id){
	actual = primero;
	while (actual!=nullptr){
		if (actual->getInstructor().getId() == id) {
			return actual->getInstructor();
		}
	}
}