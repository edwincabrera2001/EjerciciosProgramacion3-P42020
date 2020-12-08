#include "Empresa.h"
#include <fstream>
#include <iostream>

using namespace std;

void Empresa::agregarEmpleados() {

	ofstream archivoEmpleado("empleados.dat", ios::app);

	if (!archivoEmpleado) {

		cout << "Error al intentar abrir archivo .dat\n";
		return;
	}

	int cantidadEmpleados = 0;
	cout << "Ingrese Cantidad de Empleados a agregar: ";
	cin >> cantidadEmpleados;

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "\n\n *** I N G R E S O  D E  E M P L E A D O S ***\n\n";

	for (int i = 0; i < cantidadEmpleados; i++) {

		cout << "Empleado " << (i + 1) << ": \n";

		cout << "Ingrese Codigo: ";
		cin >> codigoEmpleado;

		cout << "Ingrese Nombre: ";
		cin >> nombreEmpleado;

		cout << "Ingrese Salario: ";
		cin >> salarioEmpleado;

		archivoEmpleado << codigoEmpleado << ' ' << nombreEmpleado << ' ' << salarioEmpleado << '\n';

		cout << "Empleado Almacenado!\n";

	}

	archivoEmpleado.close();

}

void Empresa::imprimirEmpleados() {

	ifstream archivoEmpleados("empleados.dat", ios::in);

	if (!archivoEmpleados) {

		cout << "Error al intentar abrir el archivo .dat\n";
		return;

	}

	cout << "\n\n *** C O N S U L T A  D E  E M P L E A D O S ***\n\n";

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "Codigo\Nombre\Salario\n";

	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {

		cout << codigoEmpleado << "\n" << nombreEmpleado << "\n" << salarioEmpleado << "\n";

	}

	archivoEmpleados.close();

}