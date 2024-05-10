#include <iostream>
using namespace std;

#define MAX_ALUMNOS 8
#define NOTA_APROBADA 70
#define NOTA_MAXIMA 100

// Funcion para leer las notas de los alumnos
void leerNotas(int notas[], int cantAlumnos)
{
    int i = 0;
    while (i < cantAlumnos)
    {
        cout << "Ingrese la nota del alumno " << i + 1 << ": ";
        cin >> notas[i];

        // Validar nota
        if (notas[i] < 0 || notas[i] > NOTA_MAXIMA)
        {
            cout << "Nota invalida. Intente de nuevo." << endl;
            return;
        }

        i++; // Incrementar contador
    }
}

int main()
{
    // Variables
    int notas[MAX_ALUMNOS];
    int cantAlumnos = MAX_ALUMNOS, suma = 0, cantAprobados = 0, cantReprobados = 0; // Setear cantidad predeterminada
    float promedio;
    int i = 0; // Inicializar contador

    // Leer notas de los alumnos
    leerNotas(notas, cantAlumnos);

    // Calcular suma y contar aprobados/reprobados
    while (i < cantAlumnos)
    {
        suma += notas[i];
        if (notas[i] >= NOTA_APROBADA)
            cantAprobados++;
        else
            cantReprobados++;

        i++; // Incrementar contador
    }

    // Calcular promedio
    promedio = suma / static_cast<float>(cantAlumnos);

    // Salidas
    cout << "El promedio general del grupo es: " << promedio << endl;
    cout << "La cantidad de alumnos aprobados es: " << cantAprobados << " :)" << endl;
    cout << "La cantidad de alumnos reprobados es: " << cantReprobados << " :(" << endl;

    return 0;
}