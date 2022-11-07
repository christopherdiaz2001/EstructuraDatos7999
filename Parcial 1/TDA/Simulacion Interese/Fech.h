/***********************************************************************
 * Module:  Fech.h
 *Autor/es: Christopher Diaz, Caiza Widinson
 * Modified: jueves, 3 de noviembre de 2022 12:37:52
 * Purpose: Declaration of the class Fech
 ***********************************************************************/
#include <iostream>
#include <ctime>

class Fecha{
    public:
        tm *añadirDias(int dias);
        void mostrarFechas(int plazos, int diaMes);
};