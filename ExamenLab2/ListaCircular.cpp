#include "ListaCircular.h"

ListaCircular::ListaCircular() : primero(nullptr), ultimo(nullptr) {

}

bool ListaCircular::estaVacia() {

	return primero == nullptr;

}

void ListaCircular::agregarObjeto(Objeto _obj) {

	Nodo* nuevo = new Nodo(_obj, nullptr, nullptr);

	if (estaVacia()) {

		primero = nuevo;
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setSiguiente(ultimo);

	}
	else {

		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);

	}

}

void ListaCircular::eliminarObjeto() {



}