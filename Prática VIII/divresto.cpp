#include <iostream>

using namespace std;

bool divresto(int dividendo, int divisor, int &resultado, int &resto) {
    if(divisor != 0) {
        resultado = dividendo / divisor;
        resto = dividendo % divisor;
        return true;
    }
    
    return false;
}

int main() {
    int N, A, B, resultado, resto;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> A >> B;
        
        if(divresto(A, B, resultado, resto)) {
            cout << resultado << " " << resto << endl;
        } else {
            cout << "indefinido" << endl;
        }
    }

    return 0;
}