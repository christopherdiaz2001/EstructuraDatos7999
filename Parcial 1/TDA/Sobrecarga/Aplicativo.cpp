/*Universidad de las Fuerzas Armadas ESPE
T�tulo: Sobrecarga de Operador "<"
Grupo
Autor/es: Christopher Diaz
Fecha de creac�on: 06/11/2022
Fecha de modificaci�n: 07/11/2022
Ingenier�a en Software
Estructura de Datos*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Numeros.h""
#pragma warning(disable : 4996)

using namespace std;

int main() {
	Numeros m, n, r;
	cout << "Ingrese dos valores: ";
	cin >> m.x >> n.x;
	
	if(m.x == n.x){
		cout << "Ambos numeros son iguales";
	}
	else if(m.x < n.x){
			cout << "Afirmacion Correcta. El menor es: " << m.x;
		}else{
			cout << "Afirmacion Incorrecta. El menor es: " << n.x;
		}
	/*r = m < n;
	cout << r.x << endl;
	*/
	return 0;
}

