/***********************************************************************
 * Module:  ListaDiblementeEnlazada.h
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: Martes, 22 de Noviembre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class ListaDiblementeEnlazada
 ***********************************************************************/
#pragma once
#include <iostream>							
#include "Nodo.h"
using namespace std;
class ListaDoblementeEnlazada
{
private:
	Nodo* inicio;
	Nodo* fin;
public:
	ListaDoblementeEnlazada();
	void agregar(int valor);
	void mostrarInicioFin();
	void mostrarFinInicio();
	void mostrarInicio();
	void mostrarFin();
	void borrarValor(int valor);
    char *integerImput(char const *msj);
    int charToInt();
	
};