/*Universidad de las Fuerzas Armadas ESPE
T�tulo: Funcion Ingresar
#Grupo
Autor/es: Diaz Christoher, Widinson Caiza
Fecha de creac�on: 11/05/2022
Fecha de modificaci�n: 11/05/2022
Ingenier�a en Software
Estructura de Datos*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ingresar.h"

using namespace std;


int main() {
	Ingresar i;
	char* dato= new char[10];
	int valorEntero;
	float valorDecimal;
	strcpy(dato, i.ingresarDatos("Ingrese el valor numerico entero o decimal: "));
	valorEntero = atoi(dato);
	valorDecimal = atof(dato);
	cout << endl;
	cout << "Valor (int) -> " << valorEntero << endl;
	cout << "Valor (float) -> " << valorDecimal << endl;
}
