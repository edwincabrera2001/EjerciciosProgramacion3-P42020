#pragma once
#ifndef ALBUM_H
#define ALBUM_H

#include "Sencillo.h"

class Album {

public:

	Album();
	Album(const char*, int, const char*);

	int duracion();
	int cantidadSencillos();
	void agregarSencillo(char*, int);
	bool estaVacia();

	void setNombre(char*);
	void setAnio(int);
	void setGenero(char*);
	void setPrimer(Sencillo*);
	void setSiguiente(Album*);

	const char* getNombre();
	int getAnio();
	const char* getGenero();
	Sencillo* getPrimer();
	Album* getSiguiente();

private:
	const char* nombreAlbum;
	int anioPublicacion;
	const char* genero;
	Sencillo* primerSencillo;
	Album* siguienteAlbum;

};

#endif // !ALBUM_H

