#include "EmpleadoNodo.h"

#include <iostream>

using std::cout;

EmpleadoNodo::EmpleadoNodo() : codigo(0), nombre(nullptr), salario(0) {

}

EmpleadoNodo::EmpleadoNodo(int _codigo, char* _nombre, float _salario) : codigo(_codigo), nombre(_nombre), salario(_salario) {

}

EmpleadoNodo* EmpleadoNodo::anterior() {

	return 

}