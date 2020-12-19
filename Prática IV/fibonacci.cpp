#include <iostream>
using namespace std;

int main() {
    
    int N;
    long long int resultado, antecessor, antecessorDoAntecessor;
    
    resultado = 0;
    antecessor = 1;
    antecessorDoAntecessor = 0;
    
    cin >> N;
    
    if(N < 2) {
        cout << N << endl;
    } else {
        for(int contador = 1; contador < N; contador++) {
            resultado = antecessor + antecessorDoAntecessor;
            antecessorDoAntecessor = antecessor;
            antecessor = resultado;            
        }
        cout << resultado << endl;
    }
    
    return 0;
}

