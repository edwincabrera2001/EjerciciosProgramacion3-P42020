#include "Objeto.h"

OBJETO_H::Entero::Entero() : entero(0) {

}

OBJETO_H::Entero::Entero(int _entero) : entero(_entero) {

}

void Entero::setEntero(int _entero){

	this->entero = _entero;

}

int Entero::getEntero() {

	return this->entero;

}

OBJETO_H::Cadena::Cadena() : cadena(nullptr) {

}

OBJETO_H::Cadena::Cadena(char* _cadena) : cadena(_cadena) {

}

void Cadena::setcadena(char* _cadena) {

	this->cadena = _cadena;

}

char* Cadena::getCadena() {

	return this->cadena;

}

OBJETO_H::Decimal::Decimal() : decimal(0) {

}

OBJETO_H::Decimal::Decimal(float _decimal)