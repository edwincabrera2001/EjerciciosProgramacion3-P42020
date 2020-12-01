#pragma once
#ifndef ALUMNONODO_H
#define ALUMNONODO_H

class AlumnoNodo {

public:
	AlumnoNodo();
	AlumnoNodo(const char*,float,AlumnoNodo*);

	void setNombre(const char*);
	void setNota(float);
	void setSiguiente(AlumnoNodo*);

	const char* getNombre();
	float getNota();
	AlumnoNodo* getSiguiente();

private:
	const char* nombre;
	float nota;
	AlumnoNodo* siguiente;

};

#endif // !ALUMNONODO_H

