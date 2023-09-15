#include <iostream>

using namespace std;

int factorial(int n) {

    int resultado = 1;

    for (int i = 1; i <= n; ++i) {

        resultado *= i;
    }

    return resultado;
}

int main() {

    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    int resultado = factorial(numero);
    cout << "El factorial de " << numero << " es " << resultado << endl;
    

    return 0;
}
