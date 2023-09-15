#include <iostream>
using namespace std;

bool primo(int numero) {
    
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i*i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (primo(numero)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
