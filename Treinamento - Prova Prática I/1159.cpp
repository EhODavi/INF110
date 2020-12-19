#include <iostream>
using namespace std;

int main() {

    int X, soma;

    do {
        cin >> X;

        if(X != 0) {

            if(X % 2 == 1 || X % 2 == -1) {
                X++;
            }

            soma = X;

            for(int contador = 1; contador < 5; contador++) {
                X += 2;
                soma += X;
            }

            cout << soma << endl;
        }

    } while(X != 0);

    return 0;
}

