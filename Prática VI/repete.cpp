#include <iostream>

using namespace std;

int main() {
    int T, N;

    cin >> T;
    int A[T];
    bool B[T] = {false};
    
    for(int i = 0; i < T; i++) {
        cin >> N;
        
        int C[N]; 
        
        for(int j = 0; j < N; j++) {
            cin >> C[j];
        }
        
        for(int p = 0; p < N; p++) {
            for(int q = p + 1; q < N; q++) {
                if(C[p] == C[q]) {
                    A[i] = C[p];
                    B[i] = true;
                }
            }
        }
        
    }
    
    for(int i = 0; i < T; i++) {
        if(B[i] == true) {
            cout << "SIM: " << A[i] << endl;
        } else {
            cout << "NAO" << endl;
        }
    }
    
    return 0;
}