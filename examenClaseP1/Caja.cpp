#include "Caja.h"
#include <iostream>

Caja::Caja() : ancho(1), largo(1), alto(1){

}

Caja::Caja(float _ancho, float _largo, float _alto) : ancho(_ancho), largo(_largo), alto(_alto){


}

void Caja::setAncho(float _ancho) {

	this->ancho = _ancho;

}

void Caja::setLargo(float _largo) {

	this->largo = _largo;

}

void Caja::setAlto(float _alto) {

	this->alto = _alto;

}

float Caja::getAncho() {

	return ancho;

}

float Caja::getLargo() {

	return largo;

}

float Caja::getAlto() {

	return alto;

}

float Caja::obtenerVolumen() {

	return ancho * largo * alto;

}

Caja& operator+(const Caja& a, const Caja& b)
{
	Caja resultado;
	resultado.alto = a.alto + b.alto;
	resultado.ancho = a.ancho + b.ancho;
	resultado.largo = a.largo + b.largo;

	return resultado;
}
