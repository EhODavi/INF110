#include <iostream>
using namespace std;

int main() {
    char operador;
    int A, B, C;

    cin >> A >> operador >> B;

    if(operador == '+') {
        C = A + B;
    } else if (operador == '-') {
        C = A - B;
    } else if (operador == '*') {
        C = A * B;
    } else {
        C = A / B;
    }

    cout << C << endl;

    return 0;
}
