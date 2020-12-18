#include "NodoD.h"

NodoD::NodoD() : valor(0), siguiente(nullptr), anterior(nullptr) {

}

NodoD::NodoD(int _valor, NodoD* _sig, NodoD* _ant) : valor(_valor), siguiente(_sig), anterior(_ant) {

}

void NodoD::setValor(int _valor) {

	this->valor = _valor;

}

void NodoD::setSiguiente(NodoD* _siguiente)
{
	this->siguiente = _siguiente;
}

void NodoD::setAnterior(NodoD* _anterior)
{
	this->anterior = _anterior;
}

int NodoD::getValor() {

	return this->valor;

}

NodoD* NodoD::getSiguiente() {

	return this->siguiente;

}

NodoD* NodoD::getAnterior() {

	return this->anterior;

}