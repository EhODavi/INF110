#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {

    char palavra[31];
    int contador = 0;
    double porcentagem;
    
    cin >> palavra;
    
    for(int i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
           palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            contador++;
        }
        
    }
    
    porcentagem = ((double)contador / (double)strlen(palavra)) * 100;
    
    cout << fixed << setprecision(0) << porcentagem << "%" << endl;
    
    
    return 0;
}