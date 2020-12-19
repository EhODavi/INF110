#include <iostream>

using namespace std;

int main() {
    
    char letra;
    int contadorLetra = 0;
    char letraRepetida;
    
    do {
        cin >> letra;
    
        if(letraRepetida == letra) {
            contadorLetra++;
        } else if(contadorLetra != 0) {
            cout << contadorLetra << letraRepetida;
            contadorLetra = 0;
        }
        
        if(contadorLetra == 0) {
            letraRepetida = letra;
            contadorLetra++; 
        }
        
    } while(letra != '.');
    
    cout << "0" << endl;
    
}   