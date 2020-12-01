#pragma once
#ifndef NODO_H
#define NODO_H

class Nodo{

public:
	Nodo();
	Nodo(char*, Nodo*, Nodo*);

	void setValor(const char*);
	void setSiguiente(Nodo*);
	void setAnterior(Nodo*);

	char* getValor();
	Nodo* getSiguiente();
	Nodo* getAnterior();

private:
	char* valor;
	Nodo* siguiente;
	Nodo* anterior;

};

#endif // !NODO_H

