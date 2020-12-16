#include "CodigoSimple.h"
#include <iostream>

using std::cout;

CodigoSimple::CodigoSimple() : primero(nullptr)
{
	cout << "Lista creada!\n";
}

bool CodigoSimple::estaVacia()
{
	return primero == nullptr;
}

void CodigoSimple::agregarNodo(int _valor)
{
	if (existeNodo(_valor))
		return;

	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (estaVacia())
	{
		//se agrega el primer elemento de la lista
		primero = nuevo;
	}
	else
	{
		//recorrer la lista y ubicarme en el ultimo elemento
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}

		//agregamos como siguiente del ultimo al nuevo nodo
		actual->setSiguiente(nuevo);

	}

	cout << "Nodo agregado!\n";
}

void CodigoSimple::agregarInicio(int _valor) {

	if (existeNodo(_valor))
		return;

	Nodo* nuevo = new Nodo(_valor, nullptr);
	Nodo* actual = primero;


	if (estaVacia())
	{
		//se agrega el primer elemento de la lista
		primero = nuevo;
	}
	else {

		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(primero);
		primero = nuevo;

	}

}


void CodigoSimple::eliminarNodo(int _valor)
{
	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	do
	{
		if (actual->getValor() == _valor)
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();
				delete actual;
			}
			else
			{
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			cout << "Nodo eliminado!\n";
			return;
		}

		anterior = actual;
		actual = actual->getSiguiente();


	} while (actual != nullptr);

}

bool CodigoSimple::existeNodo(int _valor)
{

	if (estaVacia())
		return false;

	Nodo* actual = primero;

	while (actual != nullptr)
	{
		if (actual->getValor() == _valor)
			return true;

		actual = actual->getSiguiente();
	}

	return false;
}


Nodo* CodigoSimple::obtenerPosNodo(int _posicion)
{
	if (estaVacia())
		return nullptr;

	Nodo* actual = primero;
	int posActual = 0;

	do
	{
		if (posActual == _posicion)
			return actual;

		posActual++;
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return nullptr;

}

bool CodigoSimple::eliminarPos(int _posicion) {

	if (estaVacia())
		return nullptr;

	Nodo* actual = primero;
	int posActual = 0;

	do
	{
		if (posActual == _posicion) {

			actual = nullptr; 
			return true;

		}
			

		posActual++;
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return false;

}

