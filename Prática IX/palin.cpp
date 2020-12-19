#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char palavra[31];
    bool palindromo = true;
    int contador = 0;
    
    cin >> palavra;
    
    for(int i = 0; i < strlen(palavra); i++) {
        if(palavra[i] != palavra[strlen(palavra) - 1 - i]) {
            palindromo = false;
            break;
        }
    }
    
    if(palindromo == true) {
        cout << "PALINDROMO" << endl;
    } else {
        cout << "NAO" << endl;
    }
    
    return 0;
}