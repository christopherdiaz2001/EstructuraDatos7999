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
   float getIntereses(void);
   void setIntereses(float newIntereses);
   float getPrestamo(void);
   void setPrestamo(float newPrestamo);
   int getPlazo(void);
   void setPlazo(int newPlazo);
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
   float calcularCuota(float prestamo, float interes, int plazo);
   float calcularMontoFinal(float prestamo, float cuota, float interes);
   void mostrarTablaAmortizacion(Simulacion a);


protected:
private:
   float intereses;
   float prestamo;
   int plazo;
   int interesMensual;
   int cuota;
   int amortizacion_;
   int saldo;


};

#endif