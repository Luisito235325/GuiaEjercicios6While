#include<iostream>
using namespace std;

// Funcion para imprimir los numeros impares entre 1 y 100
void imprimirNumerosImpares()
{
    int i = 1;
    while (i <= 100)
    {
        cout << i << "\n";
        i += 2;
    }
}

int main()
{
    cout << "Numeros impares entre 1 y 100" << endl;
    imprimirNumerosImpares();
    return 0;
}