#include <iostream>
#include <conio.h>

#include "Cadena.h"

using std::cout;


int main()
{
	Cadena c1;
	Cadena c2("Hola ");
	Cadena c3("Mundo!");

	c1 = c2 + c3;

	cout << "Cadena: " << c1 << "\n";
	cout << "Longitud: " << c1.tamanio() << "\n";

	Cadena c4 = c1.subcadena(5,5);

	cout << "SubCadena: " << c4 << "\n";

	for (int i = 0; i < c4.tamanio(); i++) {

		cout << c4.at(i) << "\n";

	}


	_getch();
}