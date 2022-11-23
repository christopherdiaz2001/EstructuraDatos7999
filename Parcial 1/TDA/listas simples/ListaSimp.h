/***********************************************************************
 * Module:  ListaSimp.h
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: Martes, 22 de Noviembre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class ListaSimp
 ***********************************************************************/
#pragma once
#include <iostream>
#include <conio.h>
#include "Nodo.h"

class ListaSimp {
    private:
        Nodo *inicio;
        Nodo *fin;
    public:
        ListaSimp();
        void insertarDatoLista(int dato);
        void mostrarLista();
        void eliminarDatoLista(int dato);
        void buscarDatoLista(int dato);
        void modificarDatoLista(int dato, int nuevoDato);
        char *integerImput(char const *msj);
        int charToInt();
};