#include <iostream>
#include "Operaciones.cpp"
using namespace std;
int main() {
   int opcion;
int dato;
    lista Lista;
    do {
        cout << "1. Insertar elemento en la lista" << endl;
        cout << "2. Borrar elemento de la lista" << endl;
        cout << "3. Mostrar lista" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Elemento a insertar: ";
                cin >> dato;
                Lista.Insertar(dato);
                break;
            case 2:
                cout << "Elemento a borrar: ";
                cin >> dato;
                Lista.Borrar(dato);
                break;
            case 3:
                Lista.Mostrar();
                break;
             case 4:
                        cout<<"\nSaliendo..."<<endl;
                        break;
        }
    } while(opcion != 4); 
}
