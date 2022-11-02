/***********************************************************************
 * Module:  sobreCarOp.h
 *Autor/es: Christopher Diaz, Caiza Widinson
 * Modified: mi�rcoles, 2 de noviembre de 2022 12:05:24
 * Purpose: Declaration of the class sobreCarOp
 ***********************************************************************/

#if !defined(__Class_Diagram_2_sobreCarOp_h)
#define __Class_Diagram_2_sobreCarOp_h

class Punto
{
public:
   int getA(void);
   void setA(int newA);
   int getB(void);
   void setB(int newB);
   Punto();
   ~Punto();
   Punto operator > (const Punto &p);

protected:
private:
   int a;
   int b;


};

#endif