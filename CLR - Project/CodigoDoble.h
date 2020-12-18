#pragma once
#ifndef CODIGODOBLE_H
#define CODIGODOBLE_H
#include "NodoD.h"

class CodigoDoble {

public:

	CodigoDoble();

	void agregarInicio(int);
	void agregarFinal(int);
	void eliminarValor(int);
	void eliminarPosicion(int);


private:
	int valor;
	NodoD* primero;
	NodoD* anterior;

};

#endif // !CODIGODOBLE_H
