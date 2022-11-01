/*Universidad de las Fuerzas Armadas ESPE
T�tulo: sobrecarga de operadores
#Grupo
Autor/es: Christopher Diaz, Caiza Widinson
Fecha de creac�on: 31/10/2022
Fecha de modificaci�n: 31/10/2022
Ingenier�a en Software
Estructura de Datos*/
#include <iostream>
using namespace std;
#include <string>
struct Punto{
double a,b;

};
Punto operator / (const Punto &p, const Punto &q);
Punto operator / (const Punto &p, const Punto &q){
    Punto temp;
    temp.a=p.a/temp.a;
    temp.b=p.b/temp.b;
    return temp;
}
int main() {
Punto a,b,temp;
a.a=1;
a.b=10;
b.a=2;
b.b=7;
temp=a/b;
cout<<temp.a<<"  "<<temp.b<<endl;

return 0;
}
