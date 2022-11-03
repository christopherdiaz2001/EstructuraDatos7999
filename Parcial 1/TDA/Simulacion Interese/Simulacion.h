/***********************************************************************
 * Module:  Simulacion.h
 *Autor/es: Christopher Diaz, Caiza Widinson
 * Modified: jueves, 3 de noviembre de 2022 12:37:52
 * Purpose: Declaration of the class Simulacion
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Simulacion_h)
#define __Class_Diagram_2_Simulacion_h

class Simulacion
{
public:
   int getIntereses(void);
   void setIntereses(int newIntereses);
   int getPrestamo(void);
   void setPrestamo(int newPrestamo);
   int getMeses(void);
   void setMeses(int newMeses);
   int getInteresMensual(void);
   void setInteresMensual(int newInteresMensual);
   int getCuota(void);
   void setCuota(int newCuota);
   int getAmortizacion_(void);
   void setAmortizacion_(int newAmortizacion_);
   int getSaldo(void);
   void setSaldo(int newSaldo);
   Simulacion();
   ~Simulacion();
   int calcular(int prestamo, int interes, int meses);

protected:
private:
   int intereses;
   int prestamo;
   int meses;
   int interesMensual;
   int cuota;
   int amortizacion_;
   int saldo;


};

#endif