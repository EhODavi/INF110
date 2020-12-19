#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char frase[201];
    
    cin.getline(frase, 201);
    
    for(int i = 0; frase[i] != '\0'; i++) {
        if(isupper(frase[i])) {
            cout << frase[i];
        }
    }
    
    cout << endl;

    return 0;
}