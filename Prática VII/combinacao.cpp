#include <iostream>

using namespace std;

long long int fatorial (int x) {
    long long int fat = 1;
    
    for(int i=2; i<=x; i++)
        fat *= i;

    return fat;
}

int main() {
    int N, K;
    
    cin >> N >> K;
    
    cout << (fatorial(N))/(fatorial(K) * fatorial(N - K)) << endl;
    
    
    return 0;
}