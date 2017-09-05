/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 05 Septiembre 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/
#include "InputFile.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

bool InputFile::Read(std::string filename)
{
	ifstream InputFile("Prueba.txt");
	char linea[200];
	long contador = 0L;

	if (InputFile.fail())
		cerr << "Error al abrir el archivo Prueba.txt" << endl;
	else
		while (!InputFile.eof())
		{
			InputFile.getline(linea, sizeof(linea));
			cout << linea << endl;
			if ((++contador % 24) == 0)
			{
				cout << "CONTINUA...";
				cin.get();
			}
		}
	InputFile.close();
	return 0;
}

//Get
std::string InputFile::GetContents()
{
	return _contents;
}