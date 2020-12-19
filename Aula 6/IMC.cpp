#include <iostream>
using namespace std;

int main() {
    double altura, massa, imc;

    cin >> altura >> massa;

    imc = massa / (altura * altura);

    cout << "IMC = " << imc << endl;

    if(imc >= 30) {
        cout << "Obesidade\n";
    } else if(imc >= 25) {
        cout << "Acima do peso\n";
    } else if(imc >= 18.5) {
        cout << "Peso normal\n";
    } else {
        cout << "Abaixo do peso\n";
    }

    return 0;
}


