#pragma once

#ifndef CADENA_H
#define CADENA_H

#include <iostream>

class Cadena
{
	friend Cadena& operator+(const Cadena&, const Cadena&);
	friend std::ostream& operator<<(std::ostream&, const Cadena&);

public:
	Cadena();
	Cadena(const char*);

	Cadena& operator+=(const Cadena&);

	Cadena subcadena(int, int);

	char at(int);

	Cadena tamanio(const char* _cadena);

private:
	char* contenido;
};


#endif // !CADENA_H