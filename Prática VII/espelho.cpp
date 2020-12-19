#include <iostream>
#include <cmath>

using namespace std;

int espelhar(int n) {
    int contador = 3, resultado = 0;
    
    while(n > 0) {
        resultado = resultado + ((n % 10) * pow(10, contador));
        n = n / 10;
        contador--;
    }
    
    return resultado;
}

int main() {
    int A, B;
    
    cin >> A >> B;
    
    while(A != 0 && B != 0) {
        if(espelhar(A) == B) {
            cout << "espelho" << endl;
        } else {
            cout << "nao espelho" << endl;
        }
        
        cin >> A >> B;
    }
    
    return 0;
}