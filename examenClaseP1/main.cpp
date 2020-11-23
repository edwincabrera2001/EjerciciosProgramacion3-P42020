#include <conio.h>
#include <iostream>
#include <vector>

#include "Caja.h"

using std::cout;
using std::vector;

int main() {

	Caja a(2.5,3.4,7.3);
	Caja b(3.7,2.2,5.3);
	Caja c;

	cout << "Ancho Caja a: " << a.getAncho() << "\n";
	cout << "Largo Caja a: " << a.getLargo() << "\n";
	cout << "Alto Caja a: " << a.getAlto() << "\n";
	cout << "Volumen Caja a: " << a.obtenerVolumen() << "\n";

	cout << "Ancho Caja b: " << b.getAncho() << "\n";
	cout << "Largo Caja b: " << b.getLargo() << "\n";
	cout << "Alto Caja b: " << b.getAlto() << "\n";
	cout << "Volumen Caja b: " << b.obtenerVolumen() << "\n";

	c = a + b;

	cout << "Ancho Caja c: " << c.getAncho() << "\n";
	cout << "Largo Caja c: " << c.getLargo() << "\n";
	cout << "Alto Caja c: " << c.getAlto() << "\n";
	cout << "Volumen Caja c: " << c.obtenerVolumen() << "\n";

	vector<int> calcetines;

	int* intArray = nullptr;
	intArray = new int[7];

	intArray[0] = 1;
	intArray[1] = 1;
	intArray[2] = 3;
	intArray[3] = 2;
	intArray[4] = 2;
	intArray[5] = 3;
	intArray[6] = 4;

	int uno = 0;
	int dos = 0;
	int tres = 0;
	int cuatro = 0;
	int final = 0;

	for (int i = 0; i < 8; i++) {

		if (intArray[i] = 1) {

			uno++;

		}
		else if (intArray[i] = 2) {

			dos++;

		}
		else if (intArray[i] = 3) {

			tres++;

		}
		else if (intArray[i] = 4) {

			cuatro++;

		}

	}

	cout << "Pares de Calcetines de 1: " << uno << "\n";
	cout << "Pares de Calcetines de 2: " << dos << "\n";
	cout << "Pares de Calcetines de 3: " << tres << "\n";
	cout << "Pares de Calcetines de 4: " << cuatro << "\n";

	_getch();

}