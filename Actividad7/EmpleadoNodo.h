#pragma once
#ifndef EMPLEADONODO_H
#define EMPLEADONODO_H

class EmpleadoNodo {

public:
	EmpleadoNodo();
	EmpleadoNodo(int,char*,float);

	void setCodigo(int);
	void setNombre(char*);
	void setSalario(float);

	int getCodigo();
	char* getNombre();
	float getSalario();

	EmpleadoNodo* anterior();
	EmpleadoNodo* siguiente();

private:
	int codigo;
	char* nombre;
	float salario;

};

#endif // !EMPLEADONODO_H

