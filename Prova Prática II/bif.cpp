#include <iostream>

using namespace std;

int main() {
    int N;
    
    cin >> N;
    
    if(N == 1) {
        long long int vetor[N];
        vetor[0] = 0;
        cout << vetor[0] << endl;
    } else if(N == 2) {
        long long int vetor[N];
        vetor[0] = 0;
        vetor[1] = 1;
        cout << vetor[1] << " " << vetor[0] << endl;
    } else {
        long long int vetor[N];
        vetor[0] = 0;
        vetor[1] = 1;
        for(int i = 2; i < N; i++) {
            vetor[i] = vetor[i - 1] + vetor[i - 2];
        }
        
        cout << vetor[N - 1];
    
        for(int i = N - 2; i >= 0; i--) {
            cout << " " << vetor[i];
        }
        cout << endl;
    }
    
    return 0;
}