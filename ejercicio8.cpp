#include <iostream>
using namespace std;
#define MAX 10

int main() {
    int longitud = 0; 
    int arreglo1[MAX]; 
    int arreglo2[MAX]; 
    int producto_punto = 0; // Variable para almacenar el producto punto

    cout << "Ingresa la longitud de los vectores (maximo 10): ";
    cin >> longitud; 

    while (longitud > MAX || longitud <= 0) { // Verificamos si la longitud es válida
        if (longitud <= 0) {
            cout << "La longitud no puede ser 0. Intentalo nuevamente." << endl << endl;
        }
        else {
            cout << "La longitud máxima es 10. Intentalo nuevamente." << endl << endl;
        }
        cout << "Ingresa la longitud de los vectores (maximo 10): ";
        cin >> longitud;
    }

    cout << endl << "Ingrese los datos para el primer vector" << endl << endl;
    int i = 0;
    while (i < longitud) { // Ciclo para ingresar datos al primer vector
        cout << "Posicion [" << i + 1 << "]: ";
        cin >> arreglo1[i];
        i++;
    }

    cout << endl << "Ingrese los datos para el segundo vector" << endl << endl;
    i = 0;
    while (i < longitud) { // Ciclo para ingresar datos al segundo vector
        cout << "Posicion [" << i + 1 << "]: ";
        cin >> arreglo2[i];
        i++;
    }

    // Calcular el producto punto
    i = 0;
    while (i < longitud) {
        producto_punto += arreglo1[i] * arreglo2[i];
        i++;
    }

    // Mostrar el resultado del producto punto
    cout << endl << "El producto punto de los vectores es: " << producto_punto << endl;

    return 0; 
}
