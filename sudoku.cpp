#include <iostream>
using namespace std;

int main() {
    
    int matriz[9][9] = {
        {0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 9, 0, 6, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 8, 0},
        {6, 0, 0, 0, 0, 4, 0, 0, 0},
        {0, 0, 5, 0, 0, 0, 2, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 7},
        {0, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 9, 4, 0, 8, 0, 7, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0}
    };

    // Imprimir la matriz para verificar
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << matriz[i][j] << " ";
        }
           cout << endl;
    }

    return 0;
}
