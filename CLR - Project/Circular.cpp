#include "Circular.h"
#include <iostream>

using std::cout;

Circular::Circular() : primero(nullptr), ultimo(nullptr)
{}

bool Circular::estaVacia()
{
	return primero == nullptr;
}

void Circular::agregarNodo(const char* _valor)
{

	NodoC* nuevo = new NodoC(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo agregado!\n";
}

void Circular::imprimirLista()
{

	if (estaVacia())
		return;

	NodoC* actual = primero;


	do
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << std::endl;

}

void Circular::imprimirListaReversa()
{
	if (estaVacia())
		return;

	NodoC* actual = ultimo;

	do
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != ultimo);

	cout << "\n";
}

void Circular::eliminarNodo(const char* _valor)
{
	if (estaVacia())
		return;

	NodoC* actual = primero;

	do
	{
		if (strcmp(actual->getValor(), _valor) == 0) // las cadenas son iguales
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);
			}
			else if (actual == ultimo)
			{
				ultimo = ultimo->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);
			}
			else //eliminacion en medio
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			return;
		}
		actual = actual->getSiguiente();
	} while (actual != primero);


}