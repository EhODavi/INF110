#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double numero, somaPositivos = 0, mediaPositivos;
    int quantidadePositivos = 0;


    for(int contador = 0; contador < 6; contador++) {
        cin >> numero;

        if(numero > 0) {
            somaPositivos += numero;
            quantidadePositivos++;
        }
    }

    mediaPositivos = somaPositivos / quantidadePositivos;

    cout << quantidadePositivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << mediaPositivos << endl;

    return 0;
}

