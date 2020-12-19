#include <iostream>
using namespace std;

int main() {

    int par[5], impar[5], valor, quantpar = 0, quantimpar = 0;

    for(int i = 0; i < 15; i++) {
        cin >> valor;

        if(valor % 2 == 0) {
            par[quantpar] = valor;
            quantpar++;

            if(quantpar == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                quantpar = 0;
            }
        } else {
            impar[quantimpar] = valor;
            quantimpar++;

            if(quantimpar == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                quantimpar = 0;
            }
        }
    }

    for(int j = 0; j < quantimpar; j++) {
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for(int j = 0; j < quantpar; j++) {
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    return 0;
}
