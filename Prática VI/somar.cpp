#include <iostream>

using namespace std;

int main() {
    int N, X;
    bool verifica = false;
    
    cin >> N;
    int V[N];
    
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    cin >> X;
    
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(V[i] + V[j] == X) {
                verifica = true;
            }
        }
    }
    
    if(verifica) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }
    
    return 0;
}