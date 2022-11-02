#include <iostream>
using namespace std;
#include <string>
#include "sobreCarOp.cpp"
int main()
{
    Punto p1;
    Punto p2;
    Punto p3;
    p1.setA(1);
    p1.setB(2);
    p2.setA(3);
    p2.setB(4);
    p3 = p1 > p2;
    cout << p3.getA() << endl;
    cout << p3.getB() << endl;
    return 0;
}
