/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/


#include "Rectangle.h"
//Implementacion de constructores
Rectangle::Rectangle()
{
	float _width = 1.0f;
	float _height = 1.0f;
}
Rectangle::Rectangle(float w, float h)
{
	float _width = w;
	float _height = h;

}
//Implementacion de metodos
//Get's

float Rectangle::GetWidth()
{
	return _width;

}
float Rectangle::GetHeight()
{
	return _height;

}
float Rectangle::GetArea()
{
	return  _width *_height;

}
float Rectangle::GetPerimeter()
{
	return _width+_height+ _width + _height;

}


//Set's
void Rectangle::SetWidth(float w)
{
	_width = w;
}
void Rectangle::SetHeight (float h)
{
	_height = h;
}