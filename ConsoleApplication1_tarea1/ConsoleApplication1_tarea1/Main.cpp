/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 16 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/

#include <iostream>

//Perimetro rectangulo
int PerimetroRectangulo(int base, int altura)
{
	int resultadoPerimetro;
	resultadoPerimetro = base * 2 + altura * 2;
	return resultadoPerimetro;
}

//Area triangulo
float AreaTriangulo(float base, float altura)
{
	float resultadoArea;
	resultadoArea = (base* altura) / 2;
	return resultadoArea;

}

//Numero mayor
int Mayor(int numero1, int numero2, int numero3) 
{
	int numeroMayor;
	numeroMayor = numero1;

	if (numero2 > numeroMayor)
		numeroMayor = numero2;

	if (numero3 > numeroMayor)
		numeroMayor = numero3;

	return numeroMayor;
}

//Numero menor
int Menor(int numero1, int numero2, int numero3)
{
	int numeroMenor;
	numeroMenor = numero1;

	if (numero2 < numeroMenor)
		numeroMenor = numero2;

	if (numero3 < numeroMenor)
		numeroMenor = numero3;

	return numeroMenor;
}

//Fila de estrellas
void FilaEstrellas(int n)
{
	int contador = 0;
	while (contador != n) {
		if (contador == n - 1)
		{
			std::cout << "*" << std::endl;
		}
		else {
			std::cout << "*";
		}
		contador++;
	}

}


//Matriz de estrellas
void MatrizEstrellas(int n)
{
	int contador = 0;

	while (contador != n) {
		int contador2 = 0;
		while (contador2 != n) {
			if (contador2 == n - 1)
			{
				std::cout << "*" << std::endl;
			}
			else {
				std::cout << "*";
			}
			contador2++;
		}
		contador++;
	}
}

//Piramide de estrellas
void PiramideEstrellas(int n)
{
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

}

//Flecha de estrellas
void FlechaEstrellas(int n)
{
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
	std::cout << "\n";

	}
	for (int i = n - 1; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
	std::cout << "\n";
	}

}


//Sucesion Fibonacci
void Fibonacci(int n)
{
	int contador = 1;
	int fibonacci = 1;
	int f1 = 1;
	int f2 = 1;
	std::cout << "0 ";
	std::cout << f1 << " ";
	while (contador != n) {
		std::cout << fibonacci << " ";
		fibonacci = f1 + f2;
		f1 = f2;
		f2 = fibonacci;
		contador++;

		if (contador == n) {
			std::cout << "\n";
		}
	}

}

//¿Es primo?
bool NumeroPrimo(int numero)
{
	int a = 0;
	for (int i = 1; i < (numero + 1); i++) {
		if (numero %i == 0) {
			a++;
		}
	}
	if (a != 2) {
		std::cout << "Verdadero " << "\n";
	}
	else {
		std::cout << "Falso " << "\n";
	}
	return 0;
}


int main()
{
	//Perimetro rectangulo
	int perimetro;
	perimetro = PerimetroRectangulo(18, 14);
		std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;
	
	//Area triangulo
	float area;
	area= AreaTriangulo(6.0f, 9.0f);
		std::cout << "El area del triangulo es: " << area << std::endl;

	//Numero mayor
	int mayor;
    mayor= Mayor (15, 9, 6);
		std::cout << "El numero mayor es: " << mayor << std::endl;

	//Numero menor
	int menor;
	menor = Menor(1, 0, 2);
		std::cout << "El numero menor es: " << menor << std::endl;

	//Fila de estrellas
	std::cout << "Fila de estrellas: " << std::endl;
	FilaEstrellas(7);

	//Matriz de estrellas
	std::cout << "Matriz de estrellas: " << std::endl;
	MatrizEstrellas(6);

	//Piramide de estrellas
	std::cout << "Piramide de estrellas: " << std::endl;
	PiramideEstrellas(10);

	//Flecha de estrellas
	std::cout << "Flecha de estrellas: " << std::endl;
	FlechaEstrellas(4);

	//Sucesion Fibonacci
	std::cout << "Sucesion Fibonacci: " << std::endl;
	Fibonacci(4);

	//¿Es primo?
	std::cout << "¿Es primo?: " << std::endl;
	NumeroPrimo(4);


	std::cin.get();
	return 0;
}




