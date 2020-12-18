#pragma once
#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "NodoC.h"

class Circular
{
public:
	Circular();
	void agregarNodo(const char*);
	void eliminarNodo(const char*);
	void imprimirLista();
	void imprimirListaReversa();

private:
	NodoC* primero;
	NodoC* ultimo;

	bool estaVacia();
};

#endif // !CIRCULAR_H

