#include "SeccionLista.h"

#include <iostream>

using std::cout;


SeccionLista::SeccionLista() : primero(nullptr) {

	cout << "Lista Creada!\n";

}

bool SeccionLista::estaVacia() {

	return primero == nullptr;

}

void SeccionLista::agregarAlumno(const char* nombre, int nota) {

	AlumnoNodo* nuevo = new AlumnoNodo(nombre, nota, nullptr);

	if (estaVacia()) {

		primero = nuevo;

	}
	else {

		AlumnoNodo* actual = nuevo;

		while (actual->getSiguiente() != nullptr) {

			actual = actual->getSiguiente();

		}

		actual->setSiguiente(nuevo);

	}

	cout << "Alumno Creado!\n";

}

void SeccionLista::listarSeccion() {

	if (estaVacia())
		return;

	AlumnoNodo* actual = primero;

	do {

		cout << "Alumno: { Nombre: " << actual->getNombre() << " Nota: " << actual->getNota() << " }\n";
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	cout << std::endl;

}

int SeccionLista::cantidadAprobados() {

	if (estaVacia())
		return;

	AlumnoNodo* actual = primero;

	do {

		if (actual->getNota() < 69) {

			cout << "Alumno: { Nombre: " << actual->getNombre() << " Nota: " << actual->getNota() << " }\n";

		}
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	cout << std::endl;

}

