#include "ArbolBinario.h"
#include <iostream>
#include "Empresa.h"
#include <fstream>

using namespace std;

using std::cout;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{}

void ArbolBinario::agregarNodo(int _valor)
{
	//llamada a funcion recursiva de insertar
	raiz = agregarNodoRec(raiz, _valor);
}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raizTmp, int _valor)
{
	//caso base

	if (_raizTmp == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
		_raizTmp = nuevo;
	}
	else if (_valor > _raizTmp->getValor()) //enviar el nodo a la derecha
	{
		_raizTmp->setHijoDerecho(agregarNodoRec(_raizTmp->getHijoDerecho(), _valor));
	}
	else if (_valor < _raizTmp->getValor()) //enviar el nodo a la izquierda
	{
		_raizTmp->setHijoIzquierdo(agregarNodoRec(_raizTmp->getHijoIzquierdo(), _valor));
	}

	return _raizTmp;
}

void ArbolBinario::imprimirArbol()
{
	imprimirRec(raiz);
	cout << "\n";
}

//preorden
void ArbolBinario::imprimirRec(NodoArbol* _raizTmp)
{
	if (_raizTmp == nullptr)
		return;

	cout << "[ " << _raizTmp->getValor() << " ] ";
	imprimirRec(_raizTmp->getHijoIzquierdo());
	imprimirRec(_raizTmp->getHijoDerecho());

}

void ArbolBinario::buscarEmpleado(int codigo) {

	ifstream archivosEmpleados("empleados.dat", ios::in);

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	while (archivosEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {

		if (codigoEmpleado == codigo) {

			cout << codigoEmpleado << "\n" << nombreEmpleado << "\n" << salarioEmpleado << "\n";

		}

	}

	archivosEmpleados.close();

}

float ArbolBinario::sumatoriaSalarios() {

	ifstream archivosEmpleados("empleados.dat", ios::in);

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	float salarioTotal = 0;

	while (archivosEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {

		salarioTotal += salarioEmpleado;

	}

	archivosEmpleados.close();

	return salarioTotal;
}

int ArbolBinario::cantidadEmpleados() {

	ifstream archivosEmpleados("empleados.dat", ios::in);

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	int cantidadEmpleados = 0;

	while (archivosEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {

		cantidadEmpleados+1;

	}

	archivosEmpleados.close();

	return cantidadEmpleados;

}

float ArbolBinario::promedioSalarios() {

	ifstream archivosEmpleados("empleados.dat", ios::in);

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	float salarioTotal = 0;
	int promedio = 0;

	while (archivosEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {

		salarioTotal += salarioEmpleado;
		promedio + 1;

	}

	archivosEmpleados.close();

	return (salarioTotal/promedio);


}