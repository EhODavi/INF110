#include <iostream>

using namespace std;

bool bissexto(int n) {
    if(((n % 4 == 0) && (n % 100 != 0)) || ((n % 4 == 0) && (n % 400 == 0))) {
        return true;
    }
    
    return false;
}

int main() {
    int ano;
    
    cin >> ano;
    
    while(ano >= 0) {
        if(bissexto(ano)) {
            cout << "bissexto" << endl;
        } else {
            cout << "nao bissexto" << endl;
        }
        
        cin >> ano;
    }
    
    
    return 0;
}