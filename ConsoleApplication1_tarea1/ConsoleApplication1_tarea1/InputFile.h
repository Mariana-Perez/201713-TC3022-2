#pragma once
#include <string>

class InputFile
{
	//Clase InputFile
	//Separar entre publicos y privados, los elementos publicos van primero siempre
public:
	//Métodos, no existen constuctores en esta clase
	bool Read(std::string filename);
	//Get
	std::string GetContents();

	//Variables
private:
	std::string _contents;

};