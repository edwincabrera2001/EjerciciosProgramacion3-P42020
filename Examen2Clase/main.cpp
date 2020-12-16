#include "Artista.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main() {

	Artista a;

	a.agregarAlbum("edwin", 2000, "rock");
	a.agregarAlbum("alejandro", 1997, "pop");

	cout << a.cantidadAlbumes();
	cout << a.totalSencillos();
	cout << a.totalMinReproducciones();
	a.guardarEnArchivo();

	_getch();

}