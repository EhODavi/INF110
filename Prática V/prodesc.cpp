#include <iostream>
using namespace std;

int main() {
    
    int N;
    int soma = 0;
    
    cin >> N;
    int A[N];
    int B[N];
    
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    for(int i = 0; i < N; i++) {
        soma = soma + (A[i] * B[i]);
    }
    
    cout << soma << endl;
    
    return 0;
}