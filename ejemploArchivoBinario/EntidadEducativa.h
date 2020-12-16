#pragma once

#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H


//estructura de tama�o fijo

struct alumno
{
	int cuenta; // 4 bytes
	char nombre[20]; // 20 bytes
	float promedio; // 4 bytes
}; // sizeof = 28 bytes

struct materia
{

	int codigoMateria;
	char nombreMateria[10];
	int UVs;

};

class EntidadEducativa
{
public:
	static void agregarAlumnos();
	static void consultarAlumnos();
	static void agregarMaterias();
	static void consultarMaterias();

	static int obtenerUV(int);

};

#endif // !UNIVERSIDAD_H
