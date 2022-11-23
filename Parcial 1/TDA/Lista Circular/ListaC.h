/***********************************************************************
 * Module:  ListaC.h
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: Martes, 22 de Noviembre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class ListaC
 ***********************************************************************/
#include <iostream>
using namespace std;
class nodo {
   public:
    nodo(int v, nodo *sig = NULL) {
       valor = v;
       siguiente = sig;
    }

   private:
    int valor;
    nodo *siguiente;

   friend class lista;
};

typedef nodo *pnodo;

class lista {
   public:
    lista() { actual = NULL; }
    ~lista();

    void Insertar(int v);
    void Borrar(int v);
    bool ListaVacia() { return actual == NULL; }
    void Mostrar();
    void Siguiente();
    bool Actual() { return actual != NULL; }
    int ValorActual() { return actual->valor; }
    char *integerImput(char const *msj);
    int charToInt();
   private:
    pnodo actual;
};