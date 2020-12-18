#pragma once
#ifndef NODO_H
#define NODO_H
#include "Objeto.h"

class Nodo {

public:
	Nodo();
	Nodo(Objeto,Nodo*,Nodo*);
	
	void setObjeto(Objeto);
	void setSiguiente(Nodo*);
	void setAnterior(Nodo*);

	Objeto getObjeto();
	Nodo* getSiguiente();
	Nodo* getAnterior();

private:
	Objeto obj;
	Nodo* siguiente;
	Nodo* anterior;

};

#endif // !NODO_H

