#include <conio.h>
#include "SeccionLista.h"
#include <iostream>

using std::cout;

int main() {

	SeccionLista sl;

	sl.agregarAlumno("edwin", 90);
	sl.agregarAlumno("ale", 65);
	sl.agregarAlumno("cabrera", 83);

	sl.listarSeccion();

	sl.cantidadAprobados();

	_getch();

}