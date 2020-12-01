#pragma once
#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "Nodo.h"

class ListaCircular {

public:
	ListaCircular();
	void agregarNodo(const char*);
	void eliminarNodo(char*);
	void imprimirLista();

private:
	Nodo* primero;
	Nodo* ultimo;

	bool estaVacia();

};


#endif // !LISTACIRCULAR_H

