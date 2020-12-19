#include <iostream>

using namespace std;

int got(int secao[], int N) {
    int somatotal = 0, soma = 0;
    
    for(int i = 0; i < N; i++) {
        somatotal += secao[i];
    }
    
    somatotal /= 2;
    
    for(int i = 0; i < N; i++) {
        soma += secao[i];
        if(somatotal == soma) {
            return i + 1;
        }
    }
}

int main() {
    int N;
    
    cin >> N;
    
    int secao[N];
    
    for(int i = 0; i < N; i++) {
        cin >> secao[i];
    }
    
    cout << got(secao, N) << endl;
    
    return 0;
}