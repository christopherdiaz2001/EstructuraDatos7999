# include <iostream>
# include <string>
# include <conio.h>
# include <cmath>
# include <cstdlib>
# include "Simulacion.cpp"
using namespace std;
int main(){
    Simulacion a;
    a.setPrestamo(100000);
    a.setIntereses(0.05);
    a.setPlazo(12);
    a.setCuota(a.calcularCuota(a.getPrestamo(), a.getIntereses(), a.getPlazo()));
    a.setAmortizacion_(a.calcularMontoFinal(a.getPrestamo(), a.getCuota(), a.getIntereses()));
    a.mostrarTablaAmortizacion(a);
    return 0;
    
}