#include <iostream>

using namespace std;

int main() {
    int D, F;

    cin >> D >> F;
    int tabela[D][F];
    
    for(int i = 0; i < D; i++) {
        for(int j = 0; j < F; j++) {
            cin >> tabela[i][j];
        }
    }
    
    
    for(int i = 0; i < F; i++) {
        for(int j = 0; j < D; j++) {
            if(j == D - 1) {
                cout << tabela[j][i];
            } else {
                cout << tabela[j][i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}