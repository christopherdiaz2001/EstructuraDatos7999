/***********************************************************************
 * Module:  Simulacion.cpp
 *Autor/es: Christopher Diaz, Caiza Widinson
 * Modified: jueves, 3 de noviembre de 2022 12:37:52
 * Purpose: Implementation of the class Simulacion
 ***********************************************************************/

#include "Simulacion.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getIntereses()
// Purpose:    Implementation of Simulacion::getIntereses()
// Return:     int
////////////////////////////////////////////////////////////////////////

float Simulacion::getIntereses(void)
{
   return intereses;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setIntereses(int newIntereses)
// Purpose:    Implementation of Simulacion::setIntereses()
// Parameters:
// - newIntereses
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setIntereses(float newIntereses)
{
   intereses = newIntereses;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getPrestamo()
// Purpose:    Implementation of Simulacion::getPrestamo()
// Return:     int
////////////////////////////////////////////////////////////////////////

float Simulacion::getPrestamo(void)
{
   return prestamo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setPrestamo(int newPrestamo)
// Purpose:    Implementation of Simulacion::setPrestamo()
// Parameters:
// - newPrestamo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setPrestamo(float newPrestamo)
{
   prestamo = newPrestamo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getMeses()
// Purpose:    Implementation of Simulacion::getMeses()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getPlazo(void)
{
   return plazo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setMeses(int newMeses)
// Purpose:    Implementation of Simulacion::setMeses()
// Parameters:
// - newMeses
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setPlazo(int newPlazo)
{
   plazo = newPlazo;
}


////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getInteresMensual()
// Purpose:    Implementation of Simulacion::getInteresMensual()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getInteresMensual(void)
{
   return interesMensual;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setInteresMensual(int newInteresMensual)
// Purpose:    Implementation of Simulacion::setInteresMensual()
// Parameters:
// - newInteresMensual
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setInteresMensual(int newInteresMensual)
{
   interesMensual = newInteresMensual;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getCuota()
// Purpose:    Implementation of Simulacion::getCuota()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getCuota(void)
{
   return cuota;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setCuota(int newCuota)
// Purpose:    Implementation of Simulacion::setCuota()
// Parameters:
// - newCuota
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setCuota(int newCuota)
{
   cuota = newCuota;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getAmortizacion_()
// Purpose:    Implementation of Simulacion::getAmortizacion_()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getAmortizacion_(void)
{
   return amortizacion_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setAmortizacion_(int newAmortizacion_)
// Purpose:    Implementation of Simulacion::setAmortizacion_()
// Parameters:
// - newAmortizacion_
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setAmortizacion_(int newAmortizacion_)
{
   amortizacion_ = newAmortizacion_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getSaldo()
// Purpose:    Implementation of Simulacion::getSaldo()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getSaldo(void)
{
   return saldo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setSaldo(int newSaldo)
// Purpose:    Implementation of Simulacion::setSaldo()
// Parameters:
// - newSaldo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setSaldo(int newSaldo)
{
   saldo = newSaldo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::Simulacion()
// Purpose:    Implementation of Simulacion::Simulacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Simulacion::Simulacion()
{
   this->intereses =intereses;
   this->prestamo = prestamo;
   this->plazo = plazo;
   this->interesMensual = interesMensual;
   this->cuota = cuota;
   this->amortizacion_ = amortizacion_;
   this->saldo = saldo;

}


Simulacion::~Simulacion()
{
   // TODO : implement
}




float Simulacion::calcularCuota(float prestamo, float interes, int plazo){
    float cuota;
    interes = interes / 100;
    cuota = (prestamo * interes) / (1 - pow((1 + interes), -plazo));
    return cuota;
}

//funcion para calcular el monto final
float Simulacion::calcularMontoFinal(float prestamo, float cuota, float interes){
    float montoFinal;
    interes = interes / 100;
    interes = prestamo * interes;
    montoFinal = prestamo - (cuota - interes);
    return montoFinal;
}

//funcion para mostrar la tabla de amortizacion
void Simulacion::mostrarTablaAmortizacion(Simulacion a){
    float cuota;
    cuota = a.calcularCuota(a.getPrestamo(), a.getIntereses(), a.getPlazo());
    for(int i = 0; i < a.getPlazo(); i++){
        cout << "Mes: " << i+1 << " | Saldo inicial: " << a.getPrestamo() << " $" 
                " | Cuota: " << cuota << 
                " | Interes: " << a.getPrestamo() * (a.getIntereses() / 100) << 
                " | Capital: " << cuota - (a.getPrestamo() * (a.getIntereses() / 100)) << 
                " | Saldo final: " << a.calcularMontoFinal(a.getPrestamo(), cuota, a.getIntereses()) << " $ | \n" << endl;
        a.setPrestamo(a.calcularMontoFinal(a.getPrestamo(), cuota, a.getIntereses()));
    }
}
