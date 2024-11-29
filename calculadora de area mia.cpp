#include <iostream>
#include <cmath> 
using namespace std;

int M_PI = 3.14;

double areaCuadrado(double lado) 
{
    return lado * lado;
}


double areaRectangulo(double base, double altura) 
{
    return base * altura;
}


double areaCirculo(double radio) 
{
    return M_PI * radio * radio;
}


double areaTriangulo(double base, double altura) 
{
    return (base * altura) / 2;
}


double areaRombo(double diagonalMayor, double diagonalMenor) 
{
    return (diagonalMayor * diagonalMenor) / 2;
}

int main() {
    int opcion;
    double lado, base, altura, radio, diagonalMayor, diagonalMenor;

    do {
        cout << "Calculadora de Áreas\n";
        cout << "1. Cuadrado\n";
        cout << "2. Rectángulo\n";
        cout << "3. Círculo\n";
        cout << "4. Triángulo\n";
        cout << "5. Rombo\n";
        cout << "6. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Introduce el lado del cuadrado: ";
            cin >> lado;
            cout << "El área del cuadrado es: " << areaCuadrado(lado) << endl;
            break;
        case 2:
            cout << "Introduce la base y la altura del rectángulo: ";
            cin >> base >> altura;
            cout << "El área del rectángulo es: " << areaRectangulo(base, altura) << endl;
            break;
        case 3:
            cout << "Introduce el radio del círculo: ";
            cin >> radio;
            cout << "El área del círculo es: " << areaCirculo(radio) << endl;
            break;
        case 4:
            cout << "Introduce la base y la altura del triángulo: ";
            cin >> base >> altura;
            cout << "El área del triángulo es: " << areaTriangulo(base, altura) << endl;
            break;
        case 5:
            cout << "Introduce las diagonales mayor y menor del rombo: ";
            cin >> diagonalMayor >> diagonalMenor;
            cout << "El área del rombo es: " << areaRombo(diagonalMayor, diagonalMenor) << endl;
            break;
        case 6:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción no válida, por favor intenta de nuevo.\n";
            break;
        }
        cout << endl;
    } while (opcion != 6);

    return 0;
}
