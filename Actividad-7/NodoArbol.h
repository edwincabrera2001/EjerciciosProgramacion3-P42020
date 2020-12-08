#pragma once

#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol
{
public:
	NodoArbol(int, int, char*, float, NodoArbol*, NodoArbol*);

	void setValor(int);
	void setCodigo(int);
	void setNombre(const char*);
	void setSalario(float);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	int getValor();
	int getCodigo();
	const char* getNombre();
	float getSalario();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();

private:
	int valor;
	int codigo;
	const char* nombre;
	float salario;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;
};

#endif // !NODO_ARBOL_H