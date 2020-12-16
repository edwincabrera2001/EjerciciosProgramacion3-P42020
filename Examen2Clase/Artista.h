#pragma once
#ifndef ARTISTA_H
#define ARTISTA_H

#include "Album.h"

class Artista {

public:

	Artista();

	int totalSencillos();
	int cantidadAlbumes();
	int totalMinReproducciones();
	void guardarEnArchivo();
	void agregarAlbum(const char*, int, const char*);
	bool estaVacia();
	

private:
	char* nombreArtistico;
	int anioNacimiento;
	Album* primerAlbum;

};

#endif // !ARTISTA_H

