#include <iostream>

using namespace std;

int main() {
    int M, N, V, contador;

    cin >> M >> N;
    int tabela[M][N];
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> tabela[i][j];
        }
    }
    
    cin >> V;
    
    for(int i = 0; i < M; i++) {
        contador = 0;
        for(int j = 0; j < N; j++) {
            if(tabela[i][j] == V) {
                contador++;
            }
        }
        cout << contador << endl;
    }
    
    return 0;
}