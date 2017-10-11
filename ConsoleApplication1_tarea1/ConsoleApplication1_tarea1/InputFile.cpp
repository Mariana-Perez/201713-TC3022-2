/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 05 Septiembre 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/
#include "InputFile.h"

#include <fstream>
#include <iostream>
#include <sstream>

bool InputFile::Read(std::string filename)
{
	if (filename.empty())
	{
		std::cout << "No filename provided" << std::endl;
		return false;
	}

	std::fstream inputFile(filename, std::fstream::in);

	if (!inputFile.is_open())
	{
		std::cout << "Could not open file " << filename << std::endl;
		return false;
	}

	std::stringstream ss;
	ss << inputFile.rdbuf();
	_contents = ss.str();

	return true;
}

std::string InputFile::GetContents()
{
	return _contents;
}