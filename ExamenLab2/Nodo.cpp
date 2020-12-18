#include "Nodo.h"
#include <iostream>

Nodo::Nodo(Objeto _obj, Nodo* _siguiente, Nodo* _anterior) : obj(_obj), siguiente(_siguiente), anterior(_anterior){

}

void Nodo::setObjeto(Objeto _obj) {

	this->obj = _obj;

}

void Nodo::setSiguiente(Nodo* _sig) {

	this->siguiente = _sig;

}

void Nodo::setAnterior(Nodo* _ant) {

	this->anterior = _ant;

}

Objeto Nodo::getObjeto() {

	return this->obj;

}

Nodo* Nodo::getSiguiente() {

	return this->siguiente;

}

Nodo* Nodo::getAnterior() {

	return this->anterior;

}