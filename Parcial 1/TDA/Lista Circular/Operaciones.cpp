/***********************************************************************
 * Module:  Operaciones.cpp
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: Martes, 22 de Noviembre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class OPERACIONES
 ***********************************************************************/
#pragma once
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaC.h"
using namespace std;

lista::~lista() {
   pnodo nodo;

   // Mientras la lista tenga más de un nodo
   while(actual->siguiente != actual) {
      // Borrar el nodo siguiente al apuntado por lista
      nodo = actual->siguiente;
      actual->siguiente = nodo->siguiente;
      delete nodo;
   }
   // Y borrar el último nodo
   delete actual;
   actual = NULL;
}

void lista::Insertar(int v) {
   pnodo Nodo;

   // Creamos un nodo para el nuevo valor a insertar
   Nodo = new nodo(v);

   // Si la lista está vacía, la lista será el nuevo nodo
   // Si no lo está, insertamos el nuevo nodo a continuación del apuntado
   // por lista
   if(actual == NULL) actual = Nodo;
   else Nodo->siguiente = actual->siguiente;
   // En cualquier caso, cerramos la lista circular
   actual->siguiente = Nodo;
}

void lista::Borrar(int v) {
   pnodo nodo;

   nodo = actual;

   // Hacer que lista apunte al nodo anterior al de valor v
   do {
      if(actual->siguiente->valor != v) actual = actual->siguiente;
   } while(actual->siguiente->valor != v && actual != nodo);
   // Si existe un nodo con el valor v:
   if(actual->siguiente->valor == v) {
      // Y si la lista sólo tiene un nodo
      if(actual == actual->siguiente) {
         // Borrar toda la lista
         delete actual;
         actual = NULL;
      }
      else {
         // Si la lista tiene más de un nodo, borrar el nodo  de valor v
         nodo = actual->siguiente;
         actual->siguiente = nodo->siguiente;
         delete nodo;
      }
   }
}

void lista::Mostrar() {
   pnodo nodo = actual;

   do {
      cout << nodo->valor << "-> ";
      nodo = nodo->siguiente;
   } while(nodo != actual);

   cout << endl;
}

void lista::Siguiente() {
   if(actual) actual = actual->siguiente;
}

char *lista::integerImput(char const *msj) {
   char *cadena = new char[10];
   int i = 0;
   char caracter;

   cout << msj;
   caracter = getch();
   while(caracter != 13) {
      if(caracter >= '0' && caracter <= '9') {
         cadena[i] = caracter;
         i++;
         cout << caracter;
      }
      else if(caracter == 8 && i > 0) {
         i--;
         cout << "\b \b";
      }
      caracter = getch();
   }
   cadena[i] = '\0';
   return cadena;
}

int lista::charToInt() {
    char dato[10];
    int valor = 0;
    strcpy(dato, integerImput("\n> "));
    valor=atoi(dato);
    return valor;
}