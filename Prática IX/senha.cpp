#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char senha[31];
    bool temMaiuscula = false, temMinuscula = false, temDigito = false, temEspecial = false;
    int contador = 0;
    
    cin >> senha;
    
    for(int i = 0; senha[i] != '\0'; i++) {
        if(islower(senha[i])) {
            temMinuscula = true;
        } else if(isupper(senha[i])) {
            temMaiuscula = true;
        } else if(isdigit(senha[i])) {
            temDigito = true;
        } else if(!isalnum(senha[i])) {
            temEspecial = true;
        }
    }
    
    if(temMaiuscula == true) {
        contador++;
    }
    
    if(temMinuscula == true) {
        contador++;
    }
    
    if(temDigito == true) {
        contador++;
    }
    
    if(temEspecial == true) {
        contador++;
    }
    
    if(contador == 4) {
        cout << "segura" << endl;
    } else if (contador > 1) {
        cout << "media" << endl;
    } else {
        cout << "fraca" << endl;
    }
  
    
    return 0;
}