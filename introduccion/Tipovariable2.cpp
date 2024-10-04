#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;
int main()
{
    locale loc("");
    cout.imbue(loc);
    string texto0 = "Hola mundo";
    cout << texto0 << endl;

    string tipoa = "hello";
    string tipob = "Word!";
    string saludo = tipoa + tipob;
    cout << saludo << endl;

    string nombre;
    cout << "Dame tu Nombre:";
    cin >> nombre;
    cout << "Hola " << nombre << endl;

    cin.ignore();
    string nombreCompleto;
    cout << "Dame tu nombre completo : ";
    getline(cin, nombreCompleto);
    cout << "Tu nombre Completo es : "
        << nombreCompleto << endl;

    cout << nombre[0] << endl;
    cout << nombre[3] << endl;


    return 0;
}
