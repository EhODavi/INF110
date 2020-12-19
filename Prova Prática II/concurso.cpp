#include <iostream>

using namespace std;

int main() {
    int N, maior = 0, quantidade = 0;
    
    cin >> N;
    
    int notas[N];
    
    for(int i = 0; i < N; i++) {
        cin >> notas[i];
    }
    
    for(int i = 0; i < N; i++) {
        if(notas[i] > maior) {
            maior = notas[i];
        }
    }
    
    for(int i = 0; i < N; i++) {
        if(maior == notas[i]) {
            quantidade++;
        }
    }
    
    cout << maior << " " << quantidade << endl;
    
    return 0;
}