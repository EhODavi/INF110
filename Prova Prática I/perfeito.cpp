#include <iostream>

using namespace std;

int main() {
    
    int N;
    int soma = 0;
    
    cin >> N;
    
    for(int i = 1; i < N; i++) {
        if(N % i == 0) {
            soma += i;
        }
    }
    
    if(soma == N) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }
    
    return 0;
}   