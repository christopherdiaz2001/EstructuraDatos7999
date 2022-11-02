/***********************************************************************
 * Module:  sobreCarOp.cpp
 *Autor/es: Christopher Diaz, Caiza Widinson 
 * Modified: mi�rcoles, 2 de noviembre de 2022 12:05:24
 * Purpose: Implementation of the class sobreCarOp
 ***********************************************************************/

#include "sobreCarOp.h"
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::getA()
// Purpose:    Implementation of sobreCarOp::getA()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Punto::getA(void)
{
   return a;
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::setA(int newA)
// Purpose:    Implementation of sobreCarOp::setA()
// Parameters:
// - newA
// Return:     void
////////////////////////////////////////////////////////////////////////

void Punto::setA(int newA)
{
   a = newA;
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::getB()
// Purpose:    Implementation of sobreCarOp::getB()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Punto::getB(void)
{
   return b;
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::setB(int newB)
// Purpose:    Implementation of sobreCarOp::setB()
// Parameters:
// - newB
// Return:     void
////////////////////////////////////////////////////////////////////////

void Punto::setB(int newB)
{
   b = newB;
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::sobreCarOp()
// Purpose:    Implementation of sobreCarOp::sobreCarOp()
// Return:     
////////////////////////////////////////////////////////////////////////

Punto::Punto( )
{
   this -> a = 3;
   this -> b = 4;
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::~sobreCarOp()
// Purpose:    Implementation of sobreCarOp::~sobreCarOp()
// Return:     
////////////////////////////////////////////////////////////////////////
Punto::~Punto()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       sobreCarOp::operator__()
// Purpose:    Implementation of sobreCarOp::operator__()
// Return:     int
////////////////////////////////////////////////////////////////////////

Punto Punto::operator >(const Punto &p)
{
   Punto p3;
   if (this -> a > p.a)
   {
      p3.a = this -> a;
   }
   else
   {
      p3.a = p.a;
   }
   if (this -> b > p.b)
   {
      p3.b = this -> b;
   }
   else
   {
      p3.b = p.b;
   }
   return p3;
}

int main( )
{
   Punto p1;
    Punto p2;
    Punto p3;
    p1.setA(1);
    p1.setB(2);
    p2.setA(3);
    p2.setB(4);
    p3 = p1 > p2;
    cout << p3.getA() << endl;
    cout << p3.getB() << endl;
    return 0;
}