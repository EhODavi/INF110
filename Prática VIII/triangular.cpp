#include <iostream>

using namespace std;

bool verifica(int matriz[][1000], int N) {
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if((i > j) && (matriz[i][j] != 0)) {
                return false;
            }
        }
    }
    
    return true;
}


int main() {
    int N, matriz[1000][1000];
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
    
    if(verifica(matriz, N)) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }
    
    return 0;
}