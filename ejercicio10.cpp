#include <iostream>
using namespace std;

// Funcion para ingresar los elementos de una matriz
void ingresarMatriz(int matriz[][3], const string& nombre)
{
    cout << "Ingrese los elementos de la matriz " << nombre << endl;
    int fila = 0, columna = 0;
    while (fila < 3)
    {
        columna = 0;
        while (columna < 3)
        {
            cout << "Para la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
            cin >> matriz[fila][columna];
            columna++;
        }
        fila++;
        cout << endl;
    }
    cout << endl;
}

// Funcion para mostrar una matriz
void mostrarMatriz(int matriz[][3], const string& nombre)
{
    cout << "Matriz " << nombre << ":" << endl;
    int fila = 0;
    while (fila < 3)
    {
        int columna = 0;
        while (columna < 3)
        {
            cout << matriz[fila][columna] << "\t";
            columna++;
        }
        cout << endl << endl;
        fila++;
    }
    cout << endl;
}

// Funcion para transponer una matriz
void transponerMatriz(int matriz[][3])
{
    cout << "Matriz transpuesta:" << endl;
    int fila = 0;
    while (fila < 3)
    {
        int columna = 0;
        while (columna < 3)
        {
            cout << matriz[columna][fila] << "\t";
            columna++;
        }
        cout << endl << endl;
        fila++;
    }
    cout << endl;
}

int main()
{
    int matrizA[3][3];

    ingresarMatriz(matrizA, "A");
    mostrarMatriz(matrizA, "A");
    transponerMatriz(matrizA);

    return 0;
}