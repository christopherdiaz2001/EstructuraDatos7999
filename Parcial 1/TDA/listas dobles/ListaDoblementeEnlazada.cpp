/***********************************************************************
 * Module:  ListaDiblementeEnlazada.cpp
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: Martes, 22 de Noviembre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class PersonaEdad
 ***********************************************************************/
#include "ListaDoblementeEnlazada.h"
#pragma once
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
	inicio = NULL;
	fin = NULL;
}

void ListaDoblementeEnlazada::agregar(int valor)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = valor;
	if (inicio == NULL) {
		inicio = nuevo;
		fin = nuevo;
		nuevo->izq = NULL;
		nuevo->der = NULL;
	}
	else {
		nuevo->izq = fin;
		fin->der = nuevo;
		fin = fin->der;
		//FIN = nuevo
		fin->der = NULL;
	}
}

void ListaDoblementeEnlazada::mostrarInicioFin()
{
	Nodo* reco = inicio;
	while (reco!=NULL)
	{
		cout << reco->info << endl;
		reco=reco->der;
	}
}

void ListaDoblementeEnlazada::mostrarFinInicio()
{
	Nodo* reco = fin;
	while (reco != NULL)
	{
		cout << reco->info << endl;
		reco = reco->izq;
	}
}

void ListaDoblementeEnlazada::mostrarInicio()
{
	cout << "Primer elemento: " << inicio->info << endl;
}

void ListaDoblementeEnlazada::mostrarFin()
{
	cout << "Ultimo elemento: " << fin->info << endl;
}

void ListaDoblementeEnlazada::borrarValor(int valor)
{
	if (inicio == NULL) {
		cout << "No se puede borrar el elemento " << valor << " porque la lista esta vacia!" << endl;
	}if (inicio->info == valor) {
		Nodo* borrarInicio = inicio;
		inicio = inicio->der;
		inicio->izq = NULL;
		delete borrarInicio;
	}
	else if (fin->info == valor) {
		Nodo* borrarFin = fin;
		fin = fin->izq;
		fin->der = NULL;
		delete borrarFin;
	}
	else {
		Nodo* reco = inicio->der;
		Nodo* anterior;
		Nodo* siguiente;
		Nodo* borrar;
		while (reco->der != NULL)
		{
			if (reco->info == valor) {
				anterior = reco->izq;
				siguiente = reco->der;
				borrar = reco;
				anterior->der = siguiente;
				siguiente->izq = anterior;
				delete borrar;
				break;
			}
			reco=reco->der;
		}
	}
}
char *ListaDoblementeEnlazada::integerImput(char const *msj){
	char *dato=new char[0];
	char c;
	int i = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= '0' && c <= '9'){
			cout<<c;
			dato[i++] = c;
		}else if(c == '\b'){
				i--;
				cout<<"\b \b";				
		}
	}
	dato[i] = '\0';
	return dato;
}
int ListaDoblementeEnlazada::charToInt(){
    char dato[10];
    int valor = 0;
    strcpy(dato, integerImput("\n> "));
    valor=atoi(dato);
    return valor;
}