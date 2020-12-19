#include <iostream>
using namespace std;

int main() {
    
    int A, B, MMC;
    int contador;
    
    MMC = 0;
    contador = 0;
    
    cin >> A >> B;
    
    while(MMC == 0) {
        if((contador % A == 0) && (contador % B == 0)) {
            MMC = contador;
        }
        contador++;
    }
    
    cout << MMC << endl;
    
    return 0;
}