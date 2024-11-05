#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    // 1.21 Crear el código de un programa en C++ que pregunte si quiere salir del ciclo usando la instrucción “do … while”, y leer un “string” donde el usuario tiene solo dos opciones para
    // contestar.Si el usuario contesta “SI” entonces salir del ciclo, su contesta “NO” entonces volver a hacer la pregunta “Quieres salir del ciclo ? [SI / NO]”

    std::string respuesta; 
    do 
    { 
        std::cout << "Quieres salir del ciclo? [SI/NO]: "; std::cin >> respuesta; 
    } 
    while (respuesta != "SI");

    //1.22 Hacer un menú de opciones que ejecute las operaciones aritméticas básicas (+) suma,(-) resta, (*) multiplicación, (/ ) división y(%) residuo.que muestre un menú como el que
    // se muestra en la figura de abajo.Deberá usar la instrucción “do … while”, y deberá leer un carácter y en base a la opción deberá ejecutar la operación, según la opción que elija.

    char opcion; 
    double num1, num2; 
    do
    {
        cout << "\nMenu de Operaciones:\n";
        cout << "1. Suma (+)\n"; cout << "2. Resta (-)\n";
        cout << "3. Multiplicacion (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Residuo (%)\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: "; cin >> opcion;
        if (opcion >= '1' && opcion <= '5')
        {
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
        }
        switch (opcion)
        {
             case '1':
             cout << "Resultado: " << num1 + num2 << endl; break; case '2':
             cout << "Resultado: " << num1 - num2 << endl; break; case '3':
             cout << "Resultado: " << num1 * num2 << endl; break; case '4': if (num2 != 0)
             cout << "Resultado: " << num1 / num2 << endl; else
             cout << "Error: Division por cero!" << endl; break; case '5': if (static_cast<int>(num2) != 0)
             cout << "Resultado: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;

             else cout << "Error: Division por cero!" << endl;
             break; case '6': cout << "Saliendo del programa..." << endl;
             break; default: cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != '6');

    //1.23 Crear un programa en C++ que “simule” dos operaciones básicas de un cajero que es retiro y consulta de saldo, el proceso debe considerar la lectura y validación de banda
    //magnética o chip* .Si la tarjeta es invalida, terminar el proceso usando la instrucción “break “de lo contrario pedir un pin de 4 dígitos, validar que solo sean 4 dígitos, el digito a
    //validar será “1234” de lo contrario será pin invalido.









}
