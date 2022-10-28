/***********************************************************************
 * Module:  PersonaEdad.cpp
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: jueves, 27 de octubre de 2022 09:26:09 p. m.
 * Purpose: Implementation of the class PersonaEdad
 ***********************************************************************/

#include "PersonaEdad.h"
#include "PersonaEdad.cpp"
#include <iostream>
using namespace std;
main(int argc, char** argv)
{
    PersonaEdad *obj1 = new PersonaEdad(2002, 2022, 'W', 0);
	obj1 -> calculaEdad (obj1, obj2);
    obj1 -> imprimir();
    return 0;
}
