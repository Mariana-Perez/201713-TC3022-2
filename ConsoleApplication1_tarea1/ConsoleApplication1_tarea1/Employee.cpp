/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/
#include "Employee.h"
#include <string>
#include <iostream>

//Implementacion de constructores

Employee::Employee(int id, std::string firstName, std::string lastName, int salary)
{
	_id = id;
	_salary = salary;
	_firstName = firstName;
	_lastName = lastName;
}
//Implementacion de metodos
//Get's
int Employee::GetID()
{
	return _id;
}

std::string Employee::GetFirstName()
{
	return _firstName;
}

std::string Employee::GetLastName()
{
	return _lastName;
}

std::string Employee::GetName()
{
	return std::string(_firstName + " " + _lastName);
}

int Employee::GetSalary()
{
	return _salary;
}
int Employee::GetAnnualSalary()
{
	return _salary * 12;
}

//Otros metodos

int Employee::RaiseSalary(int percent)
{
	return ((_salary*percent) / 100) + _salary;
}

std::string Employee::Print()
{
	std::string name;
	name = _firstName + " " + _lastName;
	return std::to_string(_id) + " " + name + " " + std::to_string(_salary);
}

//Set's
void Employee::SetSalary(int salary)
{
	_salary = salary;
}

