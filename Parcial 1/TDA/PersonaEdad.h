/***********************************************************************
 * Module:  PersonaEdad.h
 * Author:  widin Caiza, Christian
 * Modified: jueves, 27 de octubre de 2022 09:26:09 p. m.
 * Purpose: Declaration of the class PersonaEdad
 ***********************************************************************/

#if !defined(__Class_Diagram_1_PersonaEdad_h)
#define __Class_Diagram_1_PersonaEdad_h

class PersonaEdad
{
public:
   char getNombre(void);
   void setNombre(char newNombre);
   int getAnoNacimiento(void);
   void setAnoNacimiento(int newAnoNacimiento);
   int getAnoActual(void);
   void setAnoActual(int newAnoActual);
   PersonaEdad(int anoNaci, int anoAact, char nombr, int edad);
   ~PersonaEdad();
   PersonaEdad calculaEdad(PersonaEdad anoNaci,PersonaEdad anoActu);
   void imprimir(void);
   int getEdad(void);
   void setEdad(int newEdad);

protected:
private:
   char nombre;
   int anoNacimiento;
   int anoActual;
   int edad;


};

#endif
