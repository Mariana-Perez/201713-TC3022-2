/*******************
MATERIA: GR�FICAS COMPUTACIONALES
FECHA: 05 Septiembre 2017
AUTOR: A01376131 MARIANA P�REZ S�NCHEZ
********************/
#pragma once
#include <string>

class InputFile
{
	//Clase InputFile
	//Separar entre publicos y privados, los elementos publicos van primero siempre
public:
	//M�todos, no existen constuctores en esta clase
	bool Read(std::string filename);
	//Get
	std::string GetContents();

	//Variables
private:
	std::string _contents;

};