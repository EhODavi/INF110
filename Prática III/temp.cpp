#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double T;
    char E;
    double resultado;
    
    cin >> T >> E;
    
    if(E == 'F') {
        resultado = (T - 32) / 1.8;
        cout << fixed << setprecision(1) << resultado;
        cout << " C" << endl;
    } else {
        resultado = T * 1.8 + 32;
        cout << fixed << setprecision(1) << resultado;
        cout << " F" << endl;
    }
    
    return 0;
}