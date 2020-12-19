#include <iostream>
using namespace std;

int main() {
    
    int N, C;
    int S, E;
    int quantidadePessoas;
    char saida;
    
    quantidadePessoas = 0;
    saida = 'N';
    
    cin >> N >> C;
    
    for(int contador = 0; contador < N; contador++) {
        cin >> S >> E;
        quantidadePessoas = quantidadePessoas + (E - S);
        
        if(quantidadePessoas > C) {
            saida = 'S';
        }
    }
    
    cout << saida << endl;
    
    return 0;
}