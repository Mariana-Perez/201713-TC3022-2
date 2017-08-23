/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/
#pragma once

#include <string>

//Clase Rectangle
class Rectangle
{
	//Separar elementos publicos y privados
	public:
		//Consructores
		Rectangle();
		Rectangle(float w, float h);

		//Metodos
		//Get's
		float GetWidth();
		float GetHeight();
		float GetArea();
		float GetPerimeter();
		//Set's
		void SetWidth( float w);
		void SetHeight(float h);

	private:
		//Varibles siempre privadas
		float _width;
		float _height;









};