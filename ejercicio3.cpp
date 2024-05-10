#include<iostream>
#include<math.h>
using namespace std;

// Funcion para calcular la suma de los cuadrados de los numeros entre 1 y 100
int sumaCuadrados()
{
    int suma = 0;
    int i = 1;
    
    while (i <= 100)
    {
        suma += pow(i,2);
        i++;
    }
    
    return suma;
}

int main()
{
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: ";
    cout << sumaCuadrados() << endl;

    return 0;
}
