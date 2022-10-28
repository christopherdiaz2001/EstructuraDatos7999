/***********************************************************************
 * Module:  PersonaEdad.cpp
 * Author:  Diaz Christopher, Widinson Caiza
 * Modified: jueves, 27 de octubre de 2022 09:26:09 p. m.
 * Purpose: Implementation of the class PersonaEdad
 ***********************************************************************/

#include "PersonaEdad.h"
#include <iostream>
using namespace std;


char PersonaEdad::getNombre(void)
{
   return nombre;
}


void PersonaEdad::setNombre(char newNombre)
{
   nombre = newNombre;
}



int PersonaEdad::getAnoNacimiento(void)
{
   return anoNacimiento;
}



void PersonaEdad::setAnoNacimiento(int newAnoNacimiento)
{
   anoNacimiento = newAnoNacimiento;
}


int PersonaEdad::getAnoActual(void)
{
   return anoActual;
}


void PersonaEdad::setAnoActual(int newAnoActual)
{
   anoActual = newAnoActual;
}


PersonaEdad::PersonaEdad(int anoNaci, int anoAact, char nombr, int edad)
{
 this->anoNacimiento = anoNaci;
   this->anoActual = anoAact;
   this->nombre = nombr;
   this->edad = edad;
}


PersonaEdad::~PersonaEdad()
{
   // TODO : implement
}

PersonaEdad PersonaEdad::calculaEdad(PersonaEdad obj1, PersonaEdad obj2)
{
 this->setEdad(obj2.getAnoActual() - obj1.getAnoNacimiento());
   return *this;
}


void PersonaEdad::imprimir(void)
{
   cout<<"Edad: "<<this->edad<<endl;
}


int PersonaEdad::getEdad(void)
{
   return edad;
}


void PersonaEdad::setEdad(int newEdad)
{
   edad = newEdad;
}
