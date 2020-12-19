#include <iostream>
#include <iomanip>

using namespace std;

long long int fatorial(int M) {
    int fat = 1;
    
    if(M > 0) {
        for(int i = M; i > 0; i--) {
            fat *= i;
        }
    }
    
    return fat;
}

int main() {
    int M;
    double resultado = 0;
    
    cin >> M;
    
    for(int i = 0; i < M; i++) {
        resultado += 1.0 / fatorial(i);
    }
    
    cout << fixed << setprecision(4) << resultado << endl;
    
    return 0;
}