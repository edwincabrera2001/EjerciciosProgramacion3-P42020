#include "Objeto.h"

Objeto::Entero::Entero() : entero(0) {

}

Objeto::Entero::Entero(int _entero) : entero(_entero) {

}

void Objeto::Entero::setEntero(int _entero){

	this->entero = _entero;

}

int Objeto::Entero::getEntero() {

	return this->entero;

}

Objeto::Cadena::Cadena() : cadena(nullptr) {

}

Objeto::Cadena::Cadena(char* _cadena) : cadena(_cadena) {

}

void Objeto::Cadena::setCadena(char* _cadena) {

	this->cadena = _cadena;

}

char* Objeto::Cadena::getCadena() {

	return this->cadena;

}

Objeto::Decimal::Decimal() : decimal(0) {

}

Objeto::Decimal::Decimal(float _decimal) : decimal(_decimal) {

}

void Objeto::Decimal::setDecimal(float _decimal) {

	this->decimal = _decimal;

}

float Objeto::Decimal::getDecimal() {

	return this->decimal;

}

Objeto::Caracter::Caracter() : caracter(0) {

}

Objeto::Caracter::Caracter(char _caracter) : caracter(_caracter) {

}

void Objeto::Caracter::setCaracter(char _caracter) {

	this->caracter = _caracter;

}

char Objeto::Caracter::getCaracter() {

	return this->caracter;

}