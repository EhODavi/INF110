#include <iostream>
using namespace std;

int main() {
    double A;

    cin >> A;

    if(A >= 0 && A <= 25) {
        cout << "Intervalo [0,25]" << endl;
    } else if(A > 25 && A <= 50) {
        cout << "Intervalo (25,50]" << endl;
    } else if(A > 50 && A <= 75) {
        cout << "Intervalo (50,75]" << endl;
    } else if (A > 75 && A <= 100) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}

