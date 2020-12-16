#include "Album.h"

Album::Album() : nombreAlbum(nullptr), anioPublicacion(0), genero(nullptr), primerSencillo(nullptr), siguienteAlbum(nullptr) {

}

Album::Album(const char* _nombre, int _anio, const char* _genero) : nombreAlbum(_nombre), anioPublicacion(_anio), genero(_genero) {

}

void Album::setNombre(char* _nombre) {

	this->nombreAlbum = _nombre;

}

void Album::setAnio(int _anio) {

	this->anioPublicacion = _anio;

}

void Album::setGenero(char* _genero) {

	this->genero = _genero;

}

void Album::setPrimer(Sencillo* _primer) {

	this->primerSencillo = _primer;

}

void Album::setSiguiente(Album* _siguiente) {

	this->siguienteAlbum = _siguiente;

}

const char* Album::getNombre() {

	return this->nombreAlbum;

}

int Album::getAnio() {

	return this->anioPublicacion;

}

const char* Album::getGenero() {

	return this->genero;

}

Sencillo* Album::getPrimer() {

	return this->primerSencillo;

}

Album* Album::getSiguiente() {

	return this->siguienteAlbum;

}

bool Album::estaVacia() {

	return primerSencillo == nullptr;

}

int Album::duracion() {

	int total = 0;

	Sencillo* actual = primerSencillo;

	while (actual->getSiguiente() != nullptr) {

		total = total + actual->getDuracion();

	}

	return total;

}

int Album::cantidadSencillos() {

	int totalSencillos =  0;

	Sencillo* actual = primerSencillo;

	if (estaVacia()) {

		return 0;

	}
	else {

		while (actual->getSiguiente() != nullptr) {

			totalSencillos++;

		}

		return totalSencillos;

	}

	return 0;

}

void Album::agregarSencillo(char* _nombre, int _duracion) {

	Sencillo* nuevo = new Sencillo(_nombre, _duracion, nullptr);

	if (estaVacia()) {

		primerSencillo = nuevo;

	}
	else {

		Sencillo* actual = primerSencillo;

		while (actual->getSiguiente() != nullptr) {

			actual = actual->getSiguiente();

		}

		actual->setSiguiente(nuevo);

	}

}