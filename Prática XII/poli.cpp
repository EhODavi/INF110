#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
    int N;
    double X;
    double soma = 0;
    
    cin >> N;
    
    double coeficientes[N + 1];
    
    for(int i = 0; i < (N + 1); i++) {
        cin >> coeficientes[i];
    }
    
    cin >> X;
    int contador = N;
    
    for(int i = 0; i < (N + 1); i++) {
        soma = soma + (coeficientes[i] * pow(X, contador));
        contador--;
    }
    
    cout << fixed << setprecision(2) << soma << endl;
    
    return 0;
}