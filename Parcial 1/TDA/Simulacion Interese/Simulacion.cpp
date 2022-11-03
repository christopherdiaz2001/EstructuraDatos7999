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

int Simulacion::getIntereses(void)
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

void Simulacion::setIntereses(int newIntereses)
{
   intereses = newIntereses;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getPrestamo()
// Purpose:    Implementation of Simulacion::getPrestamo()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getPrestamo(void)
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

void Simulacion::setPrestamo(int newPrestamo)
{
   prestamo = newPrestamo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::getMeses()
// Purpose:    Implementation of Simulacion::getMeses()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Simulacion::getMeses(void)
{
   return meses;
}

////////////////////////////////////////////////////////////////////////
// Name:       Simulacion::setMeses(int newMeses)
// Purpose:    Implementation of Simulacion::setMeses()
// Parameters:
// - newMeses
// Return:     void
////////////////////////////////////////////////////////////////////////

void Simulacion::setMeses(int newMeses)
{
   meses = newMeses;
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
   this->intereses = 0;
   this->prestamo = 0;
   this->meses = 0;
   this->interesMensual = 0;
   this->cuota = 0;
   this->amortizacion_ = 0;
   this->saldo = 0;

}


Simulacion::~Simulacion()
{
   // TODO : implement
}


int Simulacion::calcular(int prestamo, int interes, int meses)
{
  Simulacion c,pres,mes,inter;
   int interesMensual, cuota, amortizacion_, saldo;
   interesMensual = (interes / 100) / 12;
   cuota = prestamo * (interesMensual / (1 - pow((1 + interesMensual), -meses)));
   amortizacion_ = cuota - (interesMensual * prestamo);
   saldo = prestamo - amortizacion_;
   cout << "Interes mensual: " << interesMensual << endl;
   cout << "Cuota: " << cuota << endl;
   cout << "Amortizacion: " << amortizacion_ << endl;
   cout << "Saldo: " << saldo << endl;
   return 0;
   
   
   
}