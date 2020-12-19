#include <iostream>

using namespace std;

int main() {
    int matriz[6][6];
    bool possibilidade = false;
    
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            matriz[i][j] = 0;
        }
    }
    
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            if(matriz[i][j] == matriz[i][j - 1] || matriz[i][j] == matriz[i - 1][j] || matriz[i][j] == matriz[i][j + 1] || matriz[i][j] == matriz[i + 1][j]) {
                possibilidade = true;
            }
        }
    }
    
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            if(matriz[i][j] == 0) {
                possibilidade = true;
            }
        }
    }
    
    if(possibilidade == true) {
        cout << "Keep playing!" << endl;
    } else {
        cout << "Game over!" << endl;
    }
    
    return 0;
}