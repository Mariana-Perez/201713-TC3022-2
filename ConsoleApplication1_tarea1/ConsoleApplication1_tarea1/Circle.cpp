#include "Circle.h"
 
//Implementacion de constructores
	Circle::Circle()
	{
	_radius = 1.0;
	_color = "red";

	}
	Circle::Circle(double r)
	{
		_radius = r;
		_color = "red";

	}

	Circle::Circle(double r, std::string c)
	{
		_radius = r;
		_color = c;
	}
	


	//Implementacion de metodos
	//Get's
	double Circle::GetRadius()
	{
		return _radius;

	}
	double Circle::GetArea()
	{
		return 3.14159* _radius *_radius;
	}

	std::string Circle::GetColor()
	{
		return _color;
	}

	//Set's
	void Circle::SetRadius (double r)
	{
		_radius = r;
	}
	void Circle::SetColor(std::string c)
	{
		_color= c;
	}