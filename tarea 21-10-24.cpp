#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
    // 1.1 Solicitar un número y mostrar su cuadrado
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    int cuadrado = numero * numero;
    cout << "El cuadrado de " << numero << " es " << cuadrado << endl;

    // 1.2 Solicitar un número y mostrar los resultados de x, 2x, 3x, 4x, 5x
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << numero << " -- " << numero * 2 << " -- " << numero * 3 << " -- " << numero * 4 << " -- " << numero * 5 << endl;

    // 1.3 Convertir peso de kilogramos a libras
    double pesoKg;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> pesoKg;
    double pesoLb = pesoKg * 2.2;
    cout << "Su peso en libras es: " << pesoLb << " libras" << endl;

    // 1.4 Calcular el Total y Promedio de tres números
    double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    double total = num1 + num2 + num3;
    double promedio = total / 3;
    cout << "Total: " << total << endl;
    cout << "Promedio: " << promedio << endl;

    // 1.5 Calcular la propina a partir del total de la cuenta y el porcentaje
    double totalCuenta, porcentaje;
    cout << "Ingrese el total de la cuenta: ";
    cin >> totalCuenta;
    cout << "Ingrese el porcentaje de propina: ";
    cin >> porcentaje;
    double propina = totalCuenta * (porcentaje / 100);
    cout << "La propina a dar es: " << propina << endl;

    // --- 1.6 Solicitar un número y verificar si es mayor a 100 ---
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num > 100) {
        cout << "El número es mayor a 100" << endl;
    }
    else {
        cout << "El número es menor o igual que 100" << endl;
    }

    // --- 1.7 Solicitar un número y verificar si es negativo o positivo ---
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero < 0) {
        cout << "El número es negativo" << endl;
    }
    else {
        cout << "El número es positivo" << endl;
    }

    // --- 1.8 Solicitar email y password, y verificar si el password es correcto ---
    string Miemail, Password_Ingresado;
    cout << "Ingrese su email: ";
    cin >> Miemail;
    cout << "Ingrese su password: ";
    cin >> Password_Ingresado;

    if (Password_Ingresado == "12345") {
        cout << "Felicidades password correcto" << endl;
    }
    else {
        cout << "Su password es incorrecto" << endl;
    }

    // --- 1.9 Convertir de grados Fahrenheit a grados Centígrados ---
    double Fahrenheit;
    cout << "Ingrese la temperatura en grados Fahrenheit: ";
    cin >> Fahrenheit;

    double Centigrados = (Fahrenheit - 32) * 5.0 / 9.0;

    if (Fahrenheit == 32) {
        cout << "0 grados centígrados (cero)" << endl;
    }
    else {
        cout << "Temperatura en grados centígrados: " << Centigrados << " grados ";
        if (Centigrados == 0) {
            cout << "(cero)" << endl;
        }
        else if (Centigrados > 0) {
            cout << "(positivo)" << endl;
        }
        else {
            cout << "(negativo)" << endl;
        }
    }

    // --- 1.10 Calcular la masa corporal e interpretar el índice ---
    double peso, estatura;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    double imc = peso / (estatura * estatura);
    cout << "Su índice de masa corporal (IMC) es: " << imc << endl;

    if (imc < 18.5) {
        cout << "Abajo del peso normal" << endl;
    }
    else if (imc >= 18.5 && imc < 25) {
        cout << "Peso Normal" << endl;
    }
    else if (imc >= 25 && imc < 30) {
        cout << "Sobrepeso" << endl;
    }
    else if (imc >= 30 && imc < 35) {
        cout << "Obeso Clase 1" << endl;
    }
    else if (imc >= 35 && imc < 40) {
        cout << "Obeso Clase 2" << endl;
    }
    else {
        cout << "Obeso Clase 3" << endl;

        return 0;
    }
}   
