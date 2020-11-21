#include "Cadena.h"

Cadena::Cadena() : contenido(nullptr)
{}

Cadena::Cadena(const char* _cadena) //"Hola " 
{
	contenido = new char[strlen(_cadena) + 1];
	strcpy_s(contenido, strlen(_cadena) + 1, _cadena);
}

Cadena& operator+(const Cadena& a, const Cadena& b)
{
	Cadena resultado;
	resultado.contenido = new char[strlen(a.contenido) + strlen(b.contenido) + 1];

	strcpy_s(resultado.contenido, strlen(a.contenido) + 1, a.contenido);
	strcat_s(resultado.contenido, strlen(resultado.contenido) + strlen(b.contenido) + 1,
		b.contenido);

	return resultado;
}

std::ostream& operator<<(std::ostream& out, const Cadena& a)
{
	out << a.contenido;
	return out;
}

Cadena& Cadena::operator+=(const Cadena& b)
{
	char* copiaContenido = new char[strlen(this->contenido) + 1];
	strcpy_s(copiaContenido, strlen(this->contenido) + 1, this->contenido);

	//eliminar lo que contenido tenga
	delete this->contenido;

	//Reservar el nuevo espacio de memoria
	this->contenido = new char[strlen(copiaContenido) + strlen(b.contenido) + 1];

	strcpy_s(this->contenido, strlen(copiaContenido) + 1, copiaContenido);
	strcat_s(this->contenido, strlen(this->contenido) + strlen(b.contenido) + 1, b.contenido);

	//retorna mi misma instancia modificada
	return *this;
}

Cadena::tamanio(const char* _cadena){

	return strlen(_cadena);

}

Cadena::subcadena(int valor, int _valor) {

	return valor;

}

Cadena::at(int valor) {

	return valor;

}