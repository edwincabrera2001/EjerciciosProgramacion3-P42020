#pragma once
#ifndef CAJA_H
#define CAJA_H

#include <iostream>

class Caja {

	friend Caja& operator+(const Caja&, const Caja&);

public:

	Caja();
	Caja(float, float, float);

	float getAncho();
	float getLargo();
	float getAlto();

	void setAncho(float);
	void setLargo(float);
	void setAlto(float);

	float obtenerVolumen();

private:
	float ancho, largo, alto;

};


#endif // !CAJA_H

