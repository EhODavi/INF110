#include <iostream>

using namespace std;

int main() {
    
    int P, T, N;
    int i = 0;
    int salvos = 0;
    
    cin >> P >> T;
    
    do {
        cin >> N;
        
        if(N == -1) {
            break;
        }
        i++;
        
        if(i <= T) {
            salvos += N;
        }
        
    } while (true);
    
    if((salvos == P) && (i <= T)) {
        cout << "Todos a salvo" << endl;
    } else {
        cout << "Apenas " << salvos << " pessoas a salvo" << endl;
    }
}   