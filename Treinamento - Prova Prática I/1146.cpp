#include <iostream>
using namespace std;

int main() {

    int numero;

    do {
        cin >> numero;
        for(int contador = 1; contador <= numero; contador++) {
            if(contador == numero) {
                cout << contador << endl;
            } else {
                cout << contador << " ";
            }
        }
    } while(numero != 0);

    return 0;
}

