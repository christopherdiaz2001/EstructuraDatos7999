# include <iostream>
# include <string>
# include <conio.h>
# include <cmath>
# include <cstdlib>
# include "Simulacion.cpp"
using namespace std;
int main(){
    Simulacion simulacion;
    int prestamo, interes, meses;
    cout << "Ingrese el monto del prestamo: ";
    cin >> prestamo;
    cout << "Ingrese el interes: ";
    cin >> interes;
    cout << "Ingrese el numero de meses: ";
    cin >> meses;
    simulacion.calcular(prestamo, interes, meses);
    cout << "El interes mensual es: " << simulacion.getInteresMensual() << endl;
    cout << "La cuota es: " << simulacion.getCuota() << endl;
    cout << "La amortizacion es: " << simulacion.getAmortizacion_() << endl;
    cout << "El saldo es: " << simulacion.getSaldo() << endl;
    system("pause");
    return 0;
    
}