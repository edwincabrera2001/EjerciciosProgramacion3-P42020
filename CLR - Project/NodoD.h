#pragma once
#ifndef NODOD_H
#define NODOD_H

class NodoD {

public:
	NodoD();
	NodoD(int, NodoD*, NodoD*);

	void setValor(int);
	void setSiguiente(NodoD*);
	void setAnterior(NodoD*);

	int getValor();
	NodoD* getSiguiente();
	NodoD* getAnterior();

private:
	int valor;
	NodoD* siguiente;
	NodoD* anterior;

};

#endif // !NODOD_H
