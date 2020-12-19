#include <iostream>
using namespace std;

int main() {
    
    long long int N, acumulador, contador;
    
    acumulador = 1;
    contador = 1;
    
    cin >> N;
    
    while(contador <= N) {
        acumulador*= contador;
        contador++;
    }
    
    cout << acumulador << endl;
    
    return 0;
}