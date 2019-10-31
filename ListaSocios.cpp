#include "ListaSocios.h"

ListaSocios::ListaSocios(){
	prim=nullptr;
	act=nullptr;
}

void ListaSocios::setActual(NodoSocios *actual){
	ListaSocios::act=actual;
}

void ListaSocios::setPrimero(NodoSocios *primero){
	ListaSocios::prim=primero;
}

NodoSocios *ListaSocios::getActual()const{
	return act;
}

NodoSocios *ListaSocios::getPrimero()const{
	return prim;
}

ListaSocios::~ListaSocios(){
	while (prim!= nullptr){
		act=prim;
		prim=prim->getNext();
		delete (act);
	}
}

bool ListaSocios::eliminarFinal() {
	act=nullptr;
	if(prim==nullptr){
		return false;
	} else if (prim->getNext() == nullptr) {
		delete prim;
	} else {
		NodoSocios* penultimo = act; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}


void ListaSocios::insertarFinal(Personas &_socio){
	prim = act;
    if (prim == nullptr) {
        prim = new NodoSocios(_socio, nullptr);
    } 
	else {
        while (act->getNext() != nullptr) {
            act=act->getNext();
        }
        act->setNext(new NodoSocios(_socio, nullptr));
    }
}

// string ListaSocios::toString(){
// 	string informe;
// 	act=prim;
// 	while (act!=nullptr){
// 		informe+=act->toString();
// 		act=act->getNext();
// 	}
// 	return informe;
// }

int ListaSocios::totalNodos(){
	int totalNodos=0;
	act=prim;
	while(act!=nullptr){
		totalNodos ++;
		act=act->getNext();
	}
	return totalNodos;
}

Personas ListaSocios::getSocioPorId(int id) {
    // act = prim;

    // while(act!=nullptr) {
    //     if(act->getSocio().getcedulaSocio() == id) {
    //         return act->getSocio();
    //     }
    //     act = act->getNext();
    // }
	return prim->getSocio();
}

 string ListaSocios::getSocios(string nombreInstrctor) {
     act = prim;
     string str = "";

    while(act!=nullptr) {
        str += to_string(act->getSocio().getcedulaSocio()) + "\t" +  act->getSocio().getnombreSocio() + "\t" + nombreInstrctor + "\n"; 
        act = act->getNext();
    }
	return str;
 }

 bool ListaSocios::existeSocioPorId(int cedula) {
	act = prim;

    while(act!=nullptr) {
        if(act->getSocio().getcedulaSocio() == cedula) {
            return true;
        }
        act = act->getNext();
    }
	return false;
 }