#include <iostream>
#include <vector>

using namespace std;

int contarOvejas(vector<bool> ovejasPresentes) {

    int I = 0;

    for (bool presente : ovejasPresentes) {

        if (presente) {

            I++;
        }
    }

    return I;
}

int main() {

    vector<bool> ovejas = {true, true, true, false, 
    true, true, true, true, 
    true, false, true, false, 
    true, false, false, true, 
    true, true, true, true,
    false, false, true, true};

    int cantidadOvejas = contarOvejas(ovejas);

    cout << "La cantidad de ovejas presentes es: " << cantidadOvejas << endl;

    return 0;
}
