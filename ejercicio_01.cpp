#include <iostream>

using namespace std;

int main() {

    float centimetros, pulgadas;

    cout<<"Ingrese un valor en centimetros: ";
    cin>>centimetros;

    pulgadas = centimetros / 2.54;

    cout<<"El valor en centimetros a pulgadas es: "<<pulgadas;

    return 0;
}

