#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int idade, quant = 0, soma = 0;

    do {
        cin >> idade;
        if(idade < 0) {
            break;
        }
        soma += idade;
        quant++;

    } while(true);

    cout << fixed << setprecision(2) << ((double)soma / quant) << endl;

    return 0;
}

