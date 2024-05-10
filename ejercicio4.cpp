#include <iostream>
using namespace std;

#define MAX 10

// Funcion para leer las notas de los estudiantes
void leerNotas(float nota[])
{
    int i = 0;
    while (i < MAX)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> nota[i];
        cout << endl;
        i++;
    }
}

// Funcion para calcular la suma de las notas
float calcularSuma(float nota[])
{
    float suma = 0;
    int j = 0;
    while (j < MAX)
    {
        suma += nota[j];
        j++;
    }
    return suma;
}

int main()
{
    float nota[MAX];
    float suma, promedio;

    cout << "Proporcione las notas de los 10 estudiantes: " << endl;
    leerNotas(nota);

    suma = calcularSuma(nota);
    promedio = suma / MAX;

    cout << "El promedio general de la seccion es: " << promedio << endl;
 
    return 0;
}