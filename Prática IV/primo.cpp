#include <iostream>
using namespace std;

int main() {
    
    int N, quantidadeDivisores;
    
    quantidadeDivisores = 0;
    
    cin >> N;
    
    for(int contador = 1; contador <= N; contador++) {
        if(N % contador == 0) {
            quantidadeDivisores++;
        }
    }
    
    if(quantidadeDivisores == 2) {
        cout << "Primo." << endl;
    } else {
        cout << "Nao primo." << endl;
    }
    
    return 0;
}