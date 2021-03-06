#pragma once
#ifndef OBJETO_H
#define OBJETO_H

class Objeto {

	Objeto();
	Objeto(int);
	Objeto(char*);
	Objeto(float);
	Objeto(char);

	class Entero {

	public:
		Entero();
		Entero(int);
		void setEntero(int);
		int getEntero();

	private:
		int entero;

	};

	class Cadena {

	public:
		Cadena();
		Cadena(char*);
		void setCadena(char*);
		char* getCadena();

	private:
		char* cadena;

	};

	class Decimal {

	public:
		Decimal();
		Decimal(float);
		void setDecimal(float);
		float getDecimal();

	private:
		float decimal;

	};

	class Caracter {

	public:
		Caracter();
		Caracter(char);
		void setCaracter(char);
		char getCaracter();

	private:
		char caracter;

	};

};

#endif // !OBJETO_H

