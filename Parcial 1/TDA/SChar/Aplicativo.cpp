/*Universidad de las Fuerzas Armadas ESPE
T�tulo: Funcion Ingresar
#Grupo
Autor/es: Christopher Diaz, Widinson Caiza
Fecha de creac�on: 12/05/2022
Fecha de modificaci�n: 12/05/2022
Ingenier�a en Software
Estructura de Datos*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ingreso.h"

int main() {
	Ingreso i;
	char* dato=new char[10];
	strcpy(dato,i.ingresarDatosE("Ingrese la palabra: "));
	printf("\nEl dato ingresado es %s",dato);
}
