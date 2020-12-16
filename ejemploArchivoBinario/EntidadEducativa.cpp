#include "EntidadEducativa.h"

#include <fstream>
#include <iostream>

using namespace std;

void EntidadEducativa::agregarAlumnos()
{
	ofstream alumnosFile("alumnos.bin", ios::out | ios::app | ios::binary);

	if (!alumnosFile)
	{
		cout << "Error al intentar abrir el archivo .bin\n";
		return;
	}

	cout << "*** I N G R E S O  D E  A L U M N O S ***\n\n";

	cout << "Indique cantidad de alumnos a ingresar: ";
	int cantidadAlumnos = 0;
	cin >> cantidadAlumnos;

	alumno nuevo;

	for (int i = 0; i < cantidadAlumnos; i++)
	{
		cout << "Alumno " << (i + 1) << ": \n";

		cout << "Indique numero de Cuenta: ";
		cin >> nuevo.cuenta;

		cout << "Ingrese nombre: ";
		cin >> nuevo.nombre;

		nuevo.promedio = 0;

		alumnosFile.write(reinterpret_cast<const char*>(&nuevo), sizeof(alumno));

	}

	alumnosFile.close();

}

void EntidadEducativa::consultarAlumnos() {

	ifstream alumnosFile("alumnos.bin", ios::in | ios::binary);

	if (!alumnosFile) {

		cout << "Error al intentar abrir el archivo .bin\n";
		return;

	}

	cout << "*** C O N S U L T A  D E  A L U M N O S ***\n";

	alumnosFile.seekg(0, ios::beg);

	alumno actual;

	alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));

	while (!alumnosFile.eof()) {

		cout << "Alumno { cuenta: " << actual.cuenta << ", nombre: " << actual.nombre << ", promedio: " << actual.promedio;

		alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));

	}

	alumnosFile.close();
}

void EntidadEducativa::agregarMaterias() {

	ofstream materiaFile("materias.bin", ios::out | ios::app | ios::binary);

	if (!materiaFile) {

		cout << "Error al intentar abrir el archivo .bin\n";
		return;

	}

	cout << "*** I N G R E S O  D E  M A T E R I A S ***\n";

	cout << "Ingrese cantidad de Materias: ";
	int cantidadMaterias;
	cin >> cantidadMaterias;

	materia nuevaMateria;

	for (int i = 0; i < cantidadMaterias; i++) {

		cout << "Ingrese codigo de Materia: ";
		cin >> nuevaMateria.codigoMateria;

		cout << "Ingrese nombre de la materia: ";
		cin >> nuevaMateria.nombreMateria;

		cout << "Ingrese UVs de la materia: ";
		cin >> nuevaMateria.UVs;
		materiaFile.write(reinterpret_cast<const char*>(&nuevaMateria), sizeof materia);

	}

	materiaFile.close();

}

void EntidadEducativa::consultarMaterias() {

	ifstream materiaFile("materias.bin", ios::in | ios::binary);

	if (!materiaFile) {

		cout << "Error al intentar abrir el archivo .bin\n";
		return;

	}

	cout << "*** C O N S U L T A  D E  M A T E R I A S ***\n";

	materia actual;

	materiaFile.seekg(0, ios::beg);

	materiaFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	while (!materiaFile.eof()) {

		cout << "Materia { Codigo: " << actual.codigoMateria << ", nombre: " << actual.nombreMateria << ", UVs: " << actual.UVs << "}\n";
		materiaFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	}

	materiaFile.close();

}

int EntidadEducativa::obtenerUV(int _codigo) {


	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	if (!materiasFile) {

		cout << "Error al intentar abrir el archivo .bin\n";
		return;

	}

	materia actual;
	materiasFile.seekg(0, ios::beg);

	materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	while (!materiasFile.eof()) {

		if (_codigo == actual.codigoMateria) {

			materiasFile.close();

			return actual.UVs;

		}

		materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	}

	return -1;

}