/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Widinson caiza
 * Modified: jueves, 10 de noviembre de 2022 24:28:50
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#if !defined(__Recursividad_Matriz_h)
#define __Recursividad_Matriz_h

class Matriz
{
public:
   int getColumna(void);
   void setColumna(int newColumna);
   int *sumarMatriz(int *, int *, int, int);
   int *multiplicarMatriz(int *, int *, int, int);
   void imprimirMatriz(int *, int, int);
   void crearMatriz(int *, int, int);
   int ingresarInt();
   void ingresarMatriz(int *, int, int);
   char *integerImput(char const *msj);
   int validarInt();
   Matriz();
   ~Matriz();

protected:
private:
   int fila;
   int columna;
};

#endif