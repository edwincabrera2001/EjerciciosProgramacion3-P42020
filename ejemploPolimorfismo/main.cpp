#include <conio.h>

#include "Figura2D.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

int main()
{
	//crear un arreglo de apuntadoras a Figuras2D de tama�o 4
	//estructura de tama�o fijo
	Figura2D* figuras[4];

	figuras[0] = new Rectangulo(4, 1);
	figuras[1] = new TrianguloRectangulo(5, 3);
	figuras[2] = new Rectangulo(4, 2);
	figuras[3] = new TrianguloRectangulo(6, 2);

	for (int i = 0; i < 4; i++)
	{
		figuras[i]->imprimirFigura();
	}




	_getch();
}