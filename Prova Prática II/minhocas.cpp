#include <iostream>

using namespace std;


int main() {
    int N, M, maiorprodutividade = 0, somaprodutividade = 0;
    
    cin >> N >> M;
    int matriz[N][M];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < N; i++) {
        somaprodutividade = 0;
        for(int j = 0; j < M; j++) {
            somaprodutividade = somaprodutividade + matriz[i][j];
        }
        
        if(somaprodutividade > maiorprodutividade) {
            maiorprodutividade = somaprodutividade;
        }
    }
    
    for(int j = 0; j < M; j++) {
        somaprodutividade = 0;
        for(int i = 0; i < N; i++) {
            somaprodutividade = somaprodutividade + matriz[i][j];
        }
        
        if(somaprodutividade > maiorprodutividade) {
            maiorprodutividade = somaprodutividade;
        }
    }
    
    cout << maiorprodutividade << endl;
    
    return 0;
}