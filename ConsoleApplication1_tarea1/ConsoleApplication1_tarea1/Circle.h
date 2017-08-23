#pragma once

#include <string>

//Clase circle
class Circle
{
	//Separar elementos publicos y privados

	public:
		//Consructores
		Circle( );
		Circle(double r);
		//Cuando se implementa un constructor con variables tipo string se pone std:: 
		Circle(double r, std::string c);


		//Metodos
		//Get's
		double GetRadius();
		double GetArea();
		//Cuando se implementa un metodo con variables tipo string se pone std:: 
		std::string GetColor();

		//Set's
		void SetRadius(double r);
		void SetColor(std::string c);




	private:

		//Varibles siempre privadas
		double _radius;
		std::string _color;








};