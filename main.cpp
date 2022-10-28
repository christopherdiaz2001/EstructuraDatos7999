#include "PersonaEdad.cpp"
#include <iostream>
using namespace std;
main(int argc, char** argv)
{
    
    PersonaEdad *obj1 = new PersonaEdad(2002, 2022, 'W', 0);
obj1 -> calculaEdad(obj1);
    obj1 -> imprimir();
    return 0;
}