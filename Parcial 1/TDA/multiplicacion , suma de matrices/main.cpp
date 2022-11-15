#include "Matriz.cpp"
#define FILAS 2
#define COLUMNAS 2

int main(int argc, char const *argv[])
{
    int *matriz1 = new int[FILAS*COLUMNAS];
    int *matriz2 = new int[FILAS*COLUMNAS];
    int *matrizsuma = new int[FILAS*COLUMNAS];
    int *matrizmulti = new int[FILAS*COLUMNAS];
    Matriz matriz;
    cout << "Ingrese los valores de la primera matriz" << endl;
    matriz.crearMatriz(matriz1, FILAS, COLUMNAS);
    cout << "Ingrese los valores de la segunda matriz" << endl;
    matriz.crearMatriz(matriz2, FILAS, COLUMNAS);
    cout << "La suma de las matrices es: " << endl;
    matrizsuma = matriz.sumarMatriz(matriz1, matriz2, FILAS, COLUMNAS);
    matriz.imprimirMatriz(matrizsuma, FILAS, COLUMNAS);
    cout << "La multiplicacion de las matrices es: " << endl;
    matrizmulti = matriz.multiplicarMatriz(matriz1, matriz2, FILAS, COLUMNAS);
    matriz.imprimirMatriz(matrizmulti, FILAS, COLUMNAS);

    return 0;
}
