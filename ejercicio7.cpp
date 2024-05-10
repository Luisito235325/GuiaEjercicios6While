#include <iostream>
using namespace std;
#define MAX 10

// Funcion para leer la longitud de los vectores
int leerLongitud()
{
    int longitud = 0;
    cout << "Ingresa la longitud de los vectores (maximo 10): ";
    cin >> longitud;

    while (longitud > MAX || longitud <= 0)
    {
        if (longitud <= 0)
        {
            cout << "La longitud no puede ser 0. Intentalo nuevamente." << endl
                 << endl;
        }
        else
        {
            cout << "La longitud máxima es 10. Intentalo nuevamente." << endl
                 << endl;
        }
        cout << "Ingresa la longitud de los vectores (maximo 10): ";
        cin >> longitud;
    }

    return longitud;
}

// Funcion para leer los elementos de un vector
void leerVector(int vector[], int longitud)
{
    int i = 0;
    while (i < longitud)
    {
        cout << "Posicion [" << i + 1 << "]: ";
        cin >> vector[i];
        i++;
    }
}

// Funcion para calcular el producto punto de dos vectores
int calcularProductoPunto(int vector1[], int vector2[], int longitud)
{
    int producto_punto = 0;
    int i = 0;
    while (i < longitud)
    {
        producto_punto += vector1[i] * vector2[i];
        i++;
    }

    return producto_punto;
}

int main()
{
    int longitud = leerLongitud();
    int arreglo1[MAX];
    int arreglo2[MAX];

    cout << endl
         << "Ingrese los datos para el primer vector" << endl
         << endl;
    leerVector(arreglo1, longitud);

    cout << endl
         << "Ingrese los datos para el segundo vector" << endl
         << endl;
    leerVector(arreglo2, longitud);

    int producto_punto = calcularProductoPunto(arreglo1, arreglo2, longitud);

    cout << endl
         << "El producto punto de los vectores es: " << producto_punto << endl;

    return 0;
}