#include<iostream>

using namespace std;

// Funcion para calcular la suma de los numeros
int sumaNumerosNaturales(int n)
{
    int suma = 0;
    int i = 1;

    while (i <= n)
    {
        suma += i;
        i++;
    }

    return suma;
}

int main()
{
    int cantidad;

    cout << "Ingrese un numero natural: ";
    cin >> cantidad;

    int totalSuma = sumaNumerosNaturales(cantidad);
    cout << "La suma de los numeros naturales desde 1 hasta " << cantidad << " es: " << totalSuma;

    return 0;
}
