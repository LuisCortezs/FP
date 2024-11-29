
#include <iostream>
#include <cmath> 
using namespace std;

double calculaArea(double lado) {
    return lado * lado;
}


double calculaArea(double base, double altura) {
    return 0.5 * base * altura;
}


double calculaArea(float radio) {
    return 3.1416 * radio * radio;
}


double calculaArea(int largo, int ancho) {
    return largo * ancho;
}

int main() {
    int opcion;
    cout << "Calculadora de áreas" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Triángulo equilátero" << endl;
    cout << "3. Círculo" << endl;
    cout << "4. Rectángulo" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "Área del cuadrado: " << calculaArea(lado) << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del triángulo equilátero: ";
            cin >> base;
            cout << "Ingrese la altura del triángulo equilátero: ";
            cin >> altura;
            cout << "Área del triángulo equilátero: " << calculaArea(base, altura) << endl;
            break;
        }
        case 3: {
            float radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            cout << "Área del círculo: " << calculaArea(radio) << endl;
            break;
        }
        case 4: {
            int largo, ancho;
            cout << "Ingrese el largo del rectángulo: ";
            cin >> largo;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            cout << "Área del rectángulo: " << calculaArea(largo, ancho) << endl;
            break;
        }
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}
