#include <conio.h>
#include <iostream>

#include "Caja.h"

using std::cout;

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

	_getch();

}