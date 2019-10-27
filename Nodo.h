#ifndef NODO_H
#define NODO_H

#include "Instructores.h"
using namespace std;
class Nodo {
	Nodo* next;
	Instructores instructor;
public:
	Nodo();
	Nodo(const Instructores& instructor, Nodo* Next);
	void setNext(Nodo *next);
	void setInstructor(const Instructores &instructor);
	Nodo *getNext() const;
	Instructores &getInstructor();
	string toString();
};

#endif 