#include <iostream>
#include <cstdlib>   // Para srand y rand
#include <ctime>     // Para time
#include <string>    // Para uso de strings

using namespace std;

int main() {
    // EJERCICIO 1.21: Ciclo que pregunta si quiere salir

    cout << "EJERCICIO 1.21: Ciclo que pregunta si quiere salir\n";
    string respuesta;
    do {
        cout << "¿Quieres salir del ciclo? [SI/NO]: ";
        cin >> respuesta;
    } while (respuesta != "SI");
    
    cout << "\n--- Ejercicio 1.21 terminado ---\n\n";
    
    // EJERCICIO 1.22: Menú de operaciones aritméticas

    cout << "EJERCICIO 1.22: Menú de operaciones aritméticas\n";
    char opcion;
    int numero1, numero2, total;
    do {
        cout << "Seleccione una operación:\n";
        cout << "(+) Suma\n(-) Resta\n(*) Multiplicación\n(/) División\n(%) Residuo\n(s) Salir\n";
        cin >> opcion;

        if (opcion == 's') break;

        cout << "Ingrese el primer número: ";
        cin >> numero1;
        cout << "Ingrese el segundo número: ";
        cin >> numero2;

        switch (opcion) {
            case '+': total = numero1 + numero2; break;
            case '-': total = numero1 - numero2; break;
            case '*': total = numero1 * numero2; break;
            case '/': total = (numero2 != 0) ? numero1 / numero2 : 0; break;
            case '%': total = numero1 % numero2; break;
            default: cout << "Operación no válida\n"; continue;
        }
        cout << "El resultado es: " << total << endl;
        
        numero1 = numero2 = total = 0; // Reiniciar variables
    } while (opcion != 's');
    
    cout << "\n--- Ejercicio 1.22 terminado ---\n\n";
    
    // EJERCICIO 1.23: Simulación de cajero automático

    cout << "EJERCICIO 1.23: Simulación de cajero automático\n";
    int saldo = 3450, pin;
    cout << "Inserte su tarjeta (chip válido)...\n";
    cout << "Ingrese su PIN de 4 dígitos: ";
    cin >> pin;

    if (pin != 1234) {
        cout << "PIN incorrecto, operación cancelada.\n";
    } else {
        cout << "Opciones:\n(1) Consultar saldo\n(2) Retirar dinero\n(3) Cancelar\n";
        int opcionCajero;
        cin >> opcionCajero;

        if (opcionCajero == 1) {
            cout << "Su saldo es: $" << saldo << endl;
        } else if (opcionCajero == 2) {
            int retiro;
            cout << "Ingrese cantidad a retirar: ";
            cin >> retiro;
            if (retiro > saldo) {
                cout << "Fondos insuficientes.\n";
            } else {
                saldo -= retiro;
                cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
            }
        } else {
            cout << "Operación cancelada.\n";
        }
    }
    
    cout << "\n--- Ejercicio 1.23 terminado ---\n\n";
    
    // EJERCICIO 1.24: Simulación del juego "Temple Run"

    cout << "EJERCICIO 1.24: Simulación del juego 'Temple Run'\n";
    int tiempo = 12;
    char direccion;
    srand(time(0)); // Inicializar semilla para aleatoriedad

    cout << "El juego ha comenzado.\n";
    while (tiempo > 0) {
        cout << "Elige una dirección (a: adelante, i: izquierda, d: derecha): ";
        cin >> direccion;

    
        bool obstaculo = rand() % 2;
        bool premio = rand() % 2;

        if (obstaculo) {
            tiempo -= 3;
            cout << "¡Obstáculo encontrado! Pierdes 3 unidades de tiempo.\n";
        } else {
            tiempo -= 1;
            cout << "Continuas sin problemas, pierdes 1 unidad de tiempo.\n";
        }

        if (premio) {
            tiempo += 3;
            cout << "¡Encontraste un premio! Ganas 3 unidades de tiempo.\n";
        } else {
            tiempo += 1;
            cout << "Pequeño bonus, ganas 1 unidad de tiempo.\n";
        }

        cout << "Tiempo restante: " << tiempo << endl;

        if (tiempo <= 0) {
            cout << "El tiempo se ha agotado. Fin del juego.\n";
        }
    }
    
    cout << "\n--- Ejercicio 1.24 terminado ---\n";
    return 0;
}
