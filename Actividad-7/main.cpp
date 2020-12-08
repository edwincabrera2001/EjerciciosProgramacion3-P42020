#include <conio.h>
#include <iostream>
#include "Empresa.h"
#include "ArbolBinario.h"

using std::cout;

int main() {

	Empresa::agregarEmpleados();

	int codigo;
	cout << "Ingrese Codigo a Buscar: ";
	std::cin >> codigo;

	ArbolBinario bl;

	bl.buscarEmpleado(codigo);
	bl.cantidadEmpleados();
	bl.sumatoriaSalarios();
	bl.promedioSalarios();

	_getch();

}