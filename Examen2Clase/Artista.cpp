#include "Artista.h"
#include <iostream>
#include <fstream>

using namespace std;

Artista::Artista() : nombreArtistico(nullptr), anioNacimiento(0), primerAlbum(nullptr) {

}

int Artista::totalSencillos() {

	int total = 0;

	Album* actual = primerAlbum;

	while (actual->getSiguiente() != nullptr) {

		total = total + actual->cantidadSencillos();

	}

	return total;

}

int Artista::cantidadAlbumes() {

	int cantidad = 0;

	Album* actual = primerAlbum;

	while (actual->getSiguiente() != nullptr) {

		cantidad++;

	}

	return cantidad;

}

int Artista::totalMinReproducciones() {

	int totalMin = 0;

	Album* actual = primerAlbum;

	while (actual->getSiguiente() != nullptr) {

		totalMin = totalMin + actual->duracion();

	}

	return totalMin;

}

void Artista::guardarEnArchivo() {

	ofstream file("Artistas.bin", ios::out | ios::app | ios::binary);

	if (!file)
	{
		cout << "Error al intentar abrir el archivo .bin\n";
		return;
	}

	Album* actual;

	while (actual->getSiguiente() != nullptr) {

		cout << nombreArtistico << " " << anioNacimiento << " ";
		cout << actual->getNombre() << " " << actual->getAnio() << " " << actual->getGenero() << "";

		file.write(reinterpret_cast<const char*>(&actual), sizeof(actual));

	}

	file.close();

}

bool Artista::estaVacia() {

	return primerAlbum == nullptr;

}

void Artista::agregarAlbum(const char* _nombre, int _anio, const char* _genero) {

	Album* nuevo = new Album(_nombre, _anio, _genero);

	if (estaVacia()) {

		primerAlbum = nuevo;

	}
	else {

		Album* actual = primerAlbum;

		while (actual->getSiguiente() != nullptr) {

			actual = actual->getSiguiente();

		}

		actual->setSiguiente(nuevo);

	}

}