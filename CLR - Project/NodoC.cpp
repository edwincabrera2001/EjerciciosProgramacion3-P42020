#include "NodoC.h"
#include <iostream>


NodoC::NodoC() : valor(nullptr), siguiente(nullptr), anterior(nullptr)
{}

NodoC::NodoC(const char* _valor, NodoC* _sig, NodoC* _ant) : siguiente(_sig),
anterior(_ant)
{
	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void NodoC::setValor(const char* _valor)
{
	if (valor != nullptr)
		delete valor;

	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void NodoC::setSiguiente(NodoC* _sig)
{
	this->siguiente = _sig;
}

void NodoC::setAnterior(NodoC* _ant)
{
	this->anterior = _ant;
}

char* NodoC::getValor()
{
	return this->valor;
}

NodoC* NodoC::getSiguiente()
{
	return this->siguiente;
}

NodoC* NodoC::getAnterior()
{
	return this->anterior;
}