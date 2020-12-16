#pragma once
#ifndef SENCILLO_H
#define SENCILLO_H

class Sencillo {

public:

	Sencillo();
	Sencillo(char*,int,Sencillo*);

	void setNombre(char*);
	void setDuracion(int);
	void setSiguiente(Sencillo*);

	char* getNombre();
	int getDuracion();
	Sencillo* getSiguiente();

private:
	char* nombreCancion;
	int duracion;
	Sencillo* siguienteSencillo;

};

#endif // !SENCILLO_H

