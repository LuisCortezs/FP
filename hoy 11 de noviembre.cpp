#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
        //1. Contar los números naturales de manera regresiva de nueve a cero
        for (int i = 9; i >= 0; i--) 
        {
            cout << i << endl;
        }

        cout << "------------------------" << endl;

        //2. Contar los números de cero a 99
        for (int i = 1; i < 100; i++) 
        {
            cout << i << endl;
        }

        cout << "------------------------" << endl;

        //3. Contar los números del uno al cien pero solo imprimir los números pares
        for (int i = 2; i <= 100; i++) 
        {
            if (i % 2 == 0) 
            {
                cout << i << endl;
            }
        }

        cout << "------------------------" << endl;

        //4. Solicitar el rango uno mínimo y uno máximo para imprimir números de manera secuencial
        int minimo, maximo;
        cout << "Ingresa el rango mínimo: ";
        cin >> minimo;
        cout << "Ingresa el rango máximo: ";
        cin >> maximo;

        for (int i = minimo; i <= maximo; i++) 
        {
            cout << i << endl;
        }

        cout << "------------------------" << endl;

        //5. Solicitar el rango uno máximo y uno mínimo para imprimir números de manera secuencial regresiva
        cout << "Ingresa el rango mínimo: ";
        cin >> minimo;
        cout << "Ingresa el rango máximo: ";
        cin >> maximo;

        for (int i = maximo; i >= minimo; i--) 
         {
            cout << i << endl;
        }

        return 0;

}
