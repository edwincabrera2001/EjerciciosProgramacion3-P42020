#pragma once

#ifndef NODOC_H
#define NODOC_H

class NodoC
{
public:
	NodoC();
	NodoC(const char*, NodoC*, NodoC*);

	void setValor(const char*);
	void setSiguiente(NodoC*);
	void setAnterior(NodoC*);

	char* getValor();
	NodoC* getSiguiente();
	NodoC* getAnterior();

private:
	char* valor;
	NodoC* siguiente;
	NodoC* anterior;
};


#endif // !NODOC_H