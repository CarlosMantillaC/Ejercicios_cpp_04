#include <iostream>

using namespace std;

int main() {

    int num = 3, multiplos, I = 1;

    multiplos = num;
    
    do {

        cout<<multiplos<<endl;
        I++;
        multiplos = num*I;

    } while (multiplos <= 20 );

    return 0;
}