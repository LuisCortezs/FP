#include <iostream>
using namespace std;

int main()
{
    // Ejercicio #1 
    int resultado[10];
    int numero, i = 0;

    while (true)
    {
        cout << " Ingresa un numero ( 0 para salir ) : " << endl; 
        cin >> numero;

        if (numero == 0)
        {
            break;
        }

        resultado[1] = numero * 10;
        cout << "El numero multiplicado por diez es : " << resultado[1] << endl;
        i++;

    }

    cout << " Programa Finalizado " << endl;


    //Ejercicio #2

    int arreglo[] = { 5, 12, 7, 22, 9, 3, 19, 45, 2, 8 };
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int mayor = arreglo[0];

    for (int i = 1; i < n; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }

    }

    cout << " El mayor elemento de arreglo es:  " << mayor << endl;



    //Ejercicio #3

    int arreglo2[] = { 34, 67, 12, 89, 45, 23, 56, 99, 13, 18 };
    int z = sizeof(arreglo2) / sizeof(arreglo2[0]);

    int mayor2 = arreglo2[0];

    for (int i = 1; i < z; i++)
    {
        if (arreglo2[i] > mayor)
        {
            mayor2 = arreglo2[i];
        }
    }
    
    cout << " El mayor elemento de arreglo es : " << mayor2 << endl;

    
    //Ejercicio #4

    int arreglo3[] = { 34, 67, 12, 89, 45, 23, 56, 99, 13, 18 };
    int w = sizeof(arreglo3) / sizeof(arreglo3[0]);  

    int suma = 0;

    for (int i = 1; i < n; i++)
    {
        suma += arreglo3[i];
    }

    double promedio = static_cast<double>(suma) / n;

    cout << "El promedio de los elementos del arreglo es: " << promedio << endl;



}
