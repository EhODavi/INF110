#include <iostream>
using namespace std;

int main() {

    double numero;
    int quantidadePositivos = 0;

    for(int contador = 0; contador < 6; contador++) {
        cin >> numero;

        if(numero > 0) {
            quantidadePositivos++;
        }
    }

    cout << quantidadePositivos << " valores positivos" << endl;

    return 0;
}

