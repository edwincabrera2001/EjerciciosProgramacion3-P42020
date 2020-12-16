#include "Sencillo.h"

Sencillo::Sencillo() : nombreCancion(nullptr), duracion(0), siguienteSencillo(nullptr) {

}

Sencillo::Sencillo(char* _nombre, int _duracion, Sencillo* _siguiente) : nombreCancion(_nombre), duracion(_duracion), siguienteSencillo(_siguiente) {

}

void Sencillo::setNombre(char* _nombre) {

	this->nombreCancion = _nombre;

}

void Sencillo::setDuracion(int _duracion) {

	this->duracion = _duracion;

}

void Sencillo::setSiguiente(Sencillo* _siguiente) {

	this->siguienteSencillo = _siguiente;

}

char* Sencillo::getNombre(){

	return this->nombreCancion;

}

int Sencillo::getDuracion() {

	return this->duracion;

}

Sencillo* Sencillo::getSiguiente() {

	return this->siguienteSencillo;

}