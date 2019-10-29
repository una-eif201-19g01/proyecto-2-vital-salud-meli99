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

// std::string ListaInstructores::obtenerDatosVehiculo(int n) {
//     string informe;
// 	actual=primero;
// 	while (actual!=nullptr){
//         if(actual->getInstructor().getId() == n) {
//             informe=actual->toString();
//             return informe;
//         }
// 		actual=actual->getNext();
// 	}
//     informe = "Vehiculo con ese ID no fue encontrado\n";
// 	return informe;
// }

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

// bool ListaInstructores::eliminarPorId(int n){
//     actual = primero;
//     Nodo* temp = primero;

//     if(actual->getVehiculo().getId() == n) {
//         if (actual->getNext() != nullptr) {
//             primero = temp->getNext();
//             delete temp;
//             temp = nullptr;
//             return true;
//         } else {
//             delete(temp);
//             temp = nullptr;
//             primero = nullptr;
//             return false;
//         }
//     } else if (actual->getNext() == nullptr) {
//         return false;
//     } else {
//         while (actual->getNext() != nullptr) {
//             if (actual->getNext()->getInstructor().getId() == n) {
//                 temp = actual->getNext();

//                 actual->setNext(temp->getNext());
//                 delete (temp);
//                 temp = nullptr;
//                 return true;
//             }
//             actual = actual->getNext();
//         }
//     }
//     return false;
// }

bool ListaInstructores::insertarSocioPorId(int n, Personas *socio){
    actual = primero;
    Nodo* temp = primero;

    if(actual->getInstructor().getId() == n) {
            actual->getInstructor().asignarSocio(socio);
	} else if (actual->getNext() == nullptr) {
        return false;
    } else {
        while (actual->getNext() != nullptr) {
            if (actual->getNext()->getInstructor().getId() == n) {
                actual->getNext()->getInstructor().asignarSocio(socio);
            }
            actual = actual->getNext();
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
		str+="\n";
		actual=actual->getNext();
	}
	return str;
}

Personas* ListaInstructores::getSocioPorId(int cedula) {
	actual = primero;
	while (actual!=nullptr){
		if (actual->getInstructor().getSocioPorId(cedula) != NULL) {
			return actual->getInstructor().getSocioPorId(cedula);
		}
	}
	return nullptr;
}

string ListaInstructores::mejoresResultadosPerdidaGrasa() {
	string str = "";
	string mejorInstructor = "";
	int mejorPerdida = 0;

	actual = primero;
	while (actual!=nullptr){
		if (actual->getInstructor().mejoresPesos() > mejorPerdida) {
			mejorInstructor = actual->getInstructor().getNombre();
			mejorPerdida = actual->getInstructor().mejoresPesos();
		}
	}

	return mejorInstructor + ": " + to_string(mejorPerdida) + "\n";
}