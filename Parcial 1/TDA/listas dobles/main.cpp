#include <iostream>							
#include "ListaDoblementeEnlazada.cpp"
using namespace std;

int main()
{
    int opcion;
    int dato;
	ListaDoblementeEnlazada listaD;
    do{
        system("cls");
        cout<<".:MENU Lista Simple:."<<endl;

        cout<<"1. Insertar dato a la lista"<<endl;
        cout<<"2. Mostrar lista"<<endl;
        cout<<"3. Eliminar dato"<<endl;
       // cout<<"4. Buscar dato"<<endl;
        cout<<"4. Salir"<<endl;
        opcion = listaD.charToInt();
        switch (opcion)
        {
        case 1:
            cout<<"Digite un numero: ";
            cin>>dato;
            listaD.agregar(dato);
            cout<<"\n";
            system("pause");
            break;
        case 2:
            cout<<"Mostrando lista de inicio a fin: "<<endl;
            listaD.mostrarInicioFin();
            cout<<"\n";
            system("pause");
            break;
        case 3:
            cout<<"Digite un numero: ";
            cin>>dato;
            listaD.borrarValor(dato);
            cout<<"\n";
            system("pause");
            break;
        case 6:
                        cout<<"\nSaliendo..."<<endl;
                        break;
        }
    } while (opcion!=4);
}

