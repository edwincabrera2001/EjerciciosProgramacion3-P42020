#pragma once
#ifndef SECCIONLISTA_H
#define SECCIONLISTA_H

#include "AlumnoNodo.h"

class SeccionLista {

public:

	SeccionLista();
	bool estaVacia();
	void agregarAlumno(const char* nombre, int nota);
	void listarSeccion();
	int cantidadAprobados();

private:
	AlumnoNodo* primero;

};

#endif // !SECCIONLISTA_H

