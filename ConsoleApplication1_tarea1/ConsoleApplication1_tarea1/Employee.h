/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/
#pragma once

#include <string>
//Class Employee

class Employee 
{
	//Separar elementos publicos y privados
public:
	//Consructores
	
	Employee(int id,std::string firsName, std::string lastName, int salary);
	
	//Metodos
	//Get's
	int GetID();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetName();
	int GetSalary();
	int GetAnnualSalary();
	
	//Otros metodos
	int  RaiseSalary(int percent);
	std::string Print();
	

	//Set's
	void SetSalary( int salary);
	


private:	
	//Varibles siempre privadas
	int _id;
	std::string _firstName;
	std::string _lastName;
	int _salary;

};