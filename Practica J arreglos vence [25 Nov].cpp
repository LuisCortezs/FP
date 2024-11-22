#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Ejercicio 1
    {
        int num;
        do {
            cout << "Ingrese un número (0 para terminar): ";
            cin >> num;
            cout << "Multiplicado por 10: " << num * 10 << endl;
           } 
        while (num != 0);
    }

    // Ejercicio 2
    {
        int arr[] = { 3, 5, 2, 8, 6 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int mayor = arr[0];

        for (int i = 1; i < n; ++i) 
        {
            if (arr[i] > mayor) 
            {
                mayor = arr[i];
            }
        }

        cout << "El mayor elemento es: " << mayor << endl;
    }

    // Ejercicio 3
    // (Duplicado del Ejercicio 2)

    // Ejercicio 4
    {
        int arr[] = { 3, 5, 2, 8, 6 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int suma = 0;

        for (int i = 0; i < n; ++i) 
        {
            suma += arr[i];
        }

        double promedio = static_cast<double>(suma) / n;
        cout << "El promedio es: " << promedio << endl;
    }

    // Ejercicio 5
    {
        int arr[] = { 3, 5, 2, 8, 6 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int mayor = arr[0], segundoMayor = arr[0];

        for (int i = 0; i < n; ++i) 
        {
            if (arr[i] > mayor) 
            {
                segundoMayor = mayor;
                mayor = arr[i];
            }
            else if (arr[i] > segundoMayor && arr[i] != mayor) 
            {
                segundoMayor = arr[i];
            }
        }

        cout << "El segundo mayor elemento es: " << segundoMayor << endl;
    }

    // Ejercicio 6
    {
        int arr[] = { 3, 5, 2, 8, 6 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int pares = 0, impares = 0;

        for (int i = 0; i < n; ++i) 
        {
            if (arr[i] % 2 == 0) 
            {
                pares++;
            }
            else 
            {
                impares++;
            }
        }

        cout << "Número de elementos pares: " << pares << endl;
        cout << "Número de elementos impares: " << impares << endl;
    }

    // Ejercicio 7
    {
        int num;
        cout << "Ingrese un número para la tabla de multiplicar: ";
        cin >> num;

        for (int i = 1; i <= 10; ++i) 
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }

    // Ejercicio 8
    {
        srand(time(0));
        int arr[1000];
        for (int i = 0; i < 1000; ++i) 
        {
            arr[i] = rand() % 10000;
        }

        int primero = arr[0], segundo = arr[0], tercero = arr[0];

        for (int i = 1; i < 1000; ++i) 
        {
            if (arr[i] > primero) 
            {
                tercero = segundo;
                segundo = primero;
                primero = arr[i];
            }
            else if (arr[i] > segundo) 
            {
                tercero = segundo;
                segundo = arr[i];
            }
            else if (arr[i] > tercero) 
            {
                tercero = arr[i];
            }
        }

        cout << "Los tres mayores elementos son: " << primero << ", " << segundo << ", " << tercero << endl;
    }

    // Ejercicio 9
    {
        srand(time(0));
        double arr[1000];
        for (int i = 0; i < 1000; ++i) 
        {
            arr[i] = static_cast<double>(rand()) / RAND_MAX * 10000.0;
        }

        double menor = arr[0], segundoMenor = arr[0];

        for (int i = 1; i < 1000; ++i) 
        {
            if (arr[i] < menor) 
            {
                segundoMenor = menor;
                menor = arr[i];
            }
            else if (arr[i] < segundoMenor && arr[i] != menor) 
            {
                segundoMenor = arr[i];
            }
        }

        cout << "El segundo menor elemento es: " << segundoMenor << endl;
    }

    // Ejercicio 10
    {
        srand(time(NULL));
        int arr[10];
        for (int i = 0; i < 10; ++i) 
        {
            arr[i] = rand() % 100;
        }
        cout << "Arreglo original: ";

        for (int i = 0; i < 10; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Invertir el arreglo
        for (int i = 0; i < 10 / 2; ++i) 
        {
            int temp = arr[i];
            arr[i] = arr[10 - i - 1];
            arr[10 - i - 1] = temp;
        }

        cout << "Arreglo invertido: ";
        for (int i = 0; i < 10; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
