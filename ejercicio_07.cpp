#include <iostream>
using namespace std;

float elevarNumero(float base, int exponente) {

    float resultado = 1;

    for (int i = 0; i < exponente; i++) {

        resultado *= base;
    }

    return resultado;
}

int main() {

    double numero;
    int potencia;

    cout << "Ingrese el número base: ";
    cin >> numero;

    cout << "Ingrese la potencia: ";
    cin >> potencia;

    float resultado = elevarNumero(numero, potencia);

    cout << numero << " elevado a la " << potencia << " es igual a " << resultado << endl;

    return 0;
}
