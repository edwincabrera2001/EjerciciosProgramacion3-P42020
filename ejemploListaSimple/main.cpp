
#include <conio.h>
#include "ListaSimple.h"

int main()
{

	ListaSimple ls;

	ls.agregarNodo(6);
	ls.agregarNodo(2);
	ls.agregarNodo(9);
	ls.agregarNodo(3);
	ls.agregarNodo(1);
	ls.agregarNodo(2);
	ls.agregarNodo(7);
	ls.agregarNodo(3);

	ls.imprimirLista();

	ls.ordenarElementos();

	ls.imprimirLista();

	/*
	ls.eliminarNodo(6);
	ls.eliminarNodo(3);
	ls.imprimirLista();*/


	_getch();