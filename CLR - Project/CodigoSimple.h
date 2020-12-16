#pragma once
#ifndef CODIGOSIMPLE_H
#define CODIGOSIMPLE_H

#include "Nodo.h"

class CodigoSimple {

public:
	CodigoSimple();

	void agregarNodo(int);
	void agregarInicio(int);
	void eliminarNodo(int);
	bool eliminarPos(int);
	Nodo* obtenerNodo();


private:
	//primer elemento de la lista
	Nodo* primero;
	bool estaVacia();
	bool existeNodo(int);

	Nodo* obtenerPosNodo(int);
	void intercambio(Nodo*, Nodo*);

};

#endif // !CODIGOSIMPLE_H

