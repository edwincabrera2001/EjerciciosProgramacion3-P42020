#include "NodoArbol.h"

NodoArbol::NodoArbol(int _valor, int _codigo, char* _nombre, float _salario, NodoArbol* _hijoDerecho, NodoArbol* _hijoIzquierdo) :
	valor(_valor), codigo(_codigo), nombre(_nombre), salario(_salario), hijoDerecho(_hijoDerecho), hijoIzquierdo(_hijoIzquierdo)
{}

void NodoArbol::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoArbol::setCodigo(int _codigo) {

	this->codigo = _codigo;

}

void NodoArbol::setNombre(const char* _nombre) {

	this->nombre = _nombre;

}

void NodoArbol::setSalario(float _salario) {

	this->salario = _salario;

}

void NodoArbol::setHijoDerecho(NodoArbol* _hijoDerecho)
{
	this->hijoDerecho = _hijoDerecho;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hijoIzquierdo)
{
	this->hijoIzquierdo = _hijoIzquierdo;
}

int NodoArbol::getValor()
{
	return valor;
}

int NodoArbol::getCodigo() {

	return codigo;

}

const char* NodoArbol::getNombre() {

	return nombre;

}

float NodoArbol::getSalario() {

	return salario;

}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return hijoIzquierdo;
}