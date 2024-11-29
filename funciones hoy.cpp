#include <iostream>
using namespace std;

// Variables Globales

// Funciones Prototipo
void hola();
// Funciones Generales
void hola2() {
	string nombre;
	cout << "Dame tu nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << endl;
}
// Estructuras

// Clases y Objetos

int main()
{
	// Llamada a Funcion hola()
	hola();
	hola2();
}

// Definicion de las Funciones
void hola() {
	std::cout << "Hello World!\n";
}
