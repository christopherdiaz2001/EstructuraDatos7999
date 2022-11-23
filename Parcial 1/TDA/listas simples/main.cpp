#include <iostream>
#include "ListaSimp.cpp"

using namespace std;

int main() {

int opcion;
int dato;
ListaSimp lista;       
do{
        system("cls");
        cout<<".:MENU Lista Simple:."<<endl;

        cout<<"1. Insertar dato a la lista"<<endl;
        cout<<"2. Mostrar lista"<<endl;
        cout<<"3. Eliminar dato"<<endl;
        cout<<"4. Buscar dato"<<endl;
        cout<<"5. Salir"<<endl;
        opcion = lista.charToInt();

        switch (opcion){
                case 1:
                        cout<<"\nIngrese el dato: ";
                        dato = lista.charToInt();
                        lista.insertarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 2:
                        cout<<"\n";
                        lista.mostrarLista();
                        cout<<"\n";
                        system("pause");
                        break;
                case 3:
                        cout<<"\nLa lista es: ";
                        lista.mostrarLista();
                        cout<<"\nIngrese el dato a eliminar: ";
                        dato = lista.charToInt();
                        lista.eliminarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 4:
                        cout<<"\nIngrese el dato a buscar: ";
                        dato = lista.charToInt();
                        cout<<"\n";
                        lista.buscarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 5:
                        cout<<"\nSaliendo..."<<endl;
                        break;
        }
}while(opcion != 5);



}
