#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double nota, somaNota = 0;
    int quantValido = 0;

    while(quantValido != 2) {
        cin >> nota;
        if(nota >= 0 && nota <= 10) {
            somaNota += nota;
            quantValido++;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    cout << "media = " << fixed << setprecision(2) << (somaNota / quantValido) << endl;

    return 0;
}

