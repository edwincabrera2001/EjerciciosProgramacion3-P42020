#include "AlumnoNodo.h"

#include <iostream>

using std::cout;

AlumnoNodo::AlumnoNodo() : nombre(nullptr), nota(0), siguiente(nullptr) {

}

AlumnoNodo::AlumnoNodo(const char* _nombre, float _nota, AlumnoNodo* _siguiente) : nombre(_nombre), nota(_nota), siguiente(_siguiente) {

}

void AlumnoNodo::setNombre(const char* _nombre) {

	this->nombre = _nombre;

}

void AlumnoNodo::setNota(float _nota) {

	this->nota = _nota;

}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente) {

	this->siguiente = _siguiente;

}

const char* AlumnoNodo::getNombre() {

	return this->nombre;

}

float AlumnoNodo::getNota() {

	return this->nota;

}

AlumnoNodo* AlumnoNodo::getSiguiente() {

	return this->siguiente;

}
