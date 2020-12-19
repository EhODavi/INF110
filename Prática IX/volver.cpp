#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int N;
    bool ordenado = false;
    
    cin >> N;
    
    char palavra[N + 1];
    
    cin >> palavra;
    
    while(ordenado == false) {
        
        for(int i = 0; i < strlen(palavra); i++) {
            cout << palavra[i];
        }
            
        cout << endl;
            
        ordenado = true;
            
        for(int i = 0; i < strlen(palavra) - 1; i++) {
            if(palavra[i] == 'D' && palavra[i + 1] == 'E') {
                palavra[i] = 'E';
                palavra[i + 1] = 'D';
                ordenado = false;
                i++;
            }
        }
        
    }
    
    return 0;
}