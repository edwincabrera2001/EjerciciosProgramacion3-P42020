#pragma once
#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "Nodo.h"

class ListaCircular {

public:
	ListaCircular();
	void agregarObjeto(Objeto);
	void eliminarObjeto(Objeto);
	Objeto obtenerCantidadObjetosxTipo();
	void imprimirLista();

private:
	Nodo* primero;
	Nodo* ultimo;

	bool estaVacia();

};

#endif // !LISTACIRCULAR_H

