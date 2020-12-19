#include <iostream>
using namespace std;

int main() {

    int X;

    cin >> X;

    if(X % 2 == 0) {
        X++;
    }

    for(int contador = 0; contador < 6; contador++) {
        cout << X << endl;
        X += 2;
    }

    return 0;
}

