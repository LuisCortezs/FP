#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // 1.16 Programa para encontrar el número más grande
    void maximoDeTres(); {
        cout << "Ingrese tres números (A, B, C): ";
        int A, B, C;
        cin >> A >> B >> C;

        int max = A;
        if (B > max) max = B;
        if (C > max) max = C;

        cout << "El número más grande es: " << max << endl;
    }

    // 1.17 Programa para encontrar el máximo y mínimo de tres números diferentes
    void maximoMinimoDeTres(); {
        cout << "Ingrese tres números diferentes (A, B, C): ";
        int A, B, C;
        cin >> A >> B >> C;

        int max = A;
        int min = A;

        if (B > max) max = B;
        if (B < min) min = B;

        if (C > max) max = C;
        if (C < min) min = C;

        cout << "El número máximo es: " << max << endl;
        cout << "El número mínimo es: " << min << endl;
    }

    // 1.18 Programa que calcula la hora dentro de un segundo más tarde
    void siguienteSegundo(); {
        cout << "Ingrese la hora (HH MM SS): ";
        int HH, MM, SS;
        cin >> HH >> MM >> SS;

        SS++;
        if (SS == 60) {
            SS = 0;
            MM++;
            if (MM == 60) {
                MM = 0;
                HH++;
                if (HH == 24) {
                    HH = 0;
                }
            }
        }

        cout << "La hora dentro de un segundo es: " << HH << " " << MM << " " << SS << endl;
    }

    // 1.19 Determinar el precio del boleto de ida y vuelta en avión
    void precioBoleto(); {
        cout << "Ingrese la distancia a recorrer (km) y el número de días de estancia: ";
        int distancia, dias;
        cin >> distancia >> dias;

        double precioPorKm = 2.5;
        double precioTotal = distancia * precioPorKm * 2; // Ida y vuelta

        if (dias > 7 && distancia > 800) {
            precioTotal *= 0.7; // Descuento del 30%
        }

        cout << "El precio total del boleto es: $" << precioTotal << endl;
    }

    // 1.20 Instrucciones para diferentes condiciones
    void condiciones(); {
        // a)
        cout << "Ingrese un ángulo: ";
        int angulo;
        cin >> angulo;
        if (angulo == 90) {
            cout << "El ángulo es un ángulo recto." << endl;
        }
        else {
            cout << "El ángulo no es un ángulo recto." << endl;
        }

        // b)
        cout << "Ingrese la temperatura en grados: ";
        int temperatura;
        cin >> temperatura;
        if (temperatura > 100) {
            cout << "Por encima del punto de ebullición del agua." << endl;
        }
        else {
            cout << "Por debajo del punto de ebullición del agua." << endl;
        }

        // c)
        cout << "Ingrese un número: ";
        int numero;
        cin >> numero;
        static int totalPositivos = 0, totalNegativos = 0;

        if (numero > 0) {
            totalPositivos += numero;
        }
        else {
            totalNegativos += numero;
        }

        cout << "Total de positivos: " << totalPositivos << ", Total de negativos: " << totalNegativos << endl;

        // d)
        cout << "Ingrese x, y, z: ";
        int x, y, z;
        cin >> x >> y >> z;
        if (x > y && z < y) {
            cout << "x: " << x << endl;
        }

        // e)
        cout << "Ingrese la distancia: ";
        int distanciaCondicion;
        cin >> distanciaCondicion;
        if (distanciaCondicion > 20 && distanciaCondicion < 35) {
            int tiempo;
            cout << "Ingrese un valor para tiempo: ";
            cin >> tiempo;
        }
    }
}
