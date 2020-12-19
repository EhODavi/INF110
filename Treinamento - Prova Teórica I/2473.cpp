#include <iostream>
using namespace std;

int main() {
    int numeros[6];
    int sorteados[6];
    int contador = 0;

    for(int i = 0; i < 6; i++) {
        cin >> numeros[i];
    }

    for(int i = 0; i < 6; i++) {
        cin >> sorteados[i];
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(numeros[i] == sorteados[j]) {
                contador++;
            }
        }
    }

    if(contador == 3) {
        cout << "terno" << endl;
    } else if(contador == 4) {
        cout << "quadra" << endl;
    } else if(contador == 5) {
        cout << "quina" << endl;
    } else if(contador == 6) {
        cout << "sena" << endl;
    } else {
        cout << "azar" << endl;
    }

    return 0;
}
