#include <iostream>

using namespace std;

bool bissexto(int n) {
    if(((n % 4 == 0) && (n % 100 != 0)) || ((n % 4 == 0) && (n % 400 == 0))) {
        return true;
    }
    
    return false;
}

bool validaData(int d, int m, int a) {
    bool valido = true;
    
    if(m == 2) {
        if(bissexto(a)) {
            if(d >= 30) {
                valido = false;
            }
        } else {
            if(d >= 29) {
                valido = false;
            }
        }
    } else if(m == 4) {
        if(d == 31) {
            valido = false;
        }
    } else if(m == 6) {
        if(d == 31) {
            valido = false;
        }
    } else if(m == 9) {
        if(d == 31) {
            valido = false;
        }
    } else if(m == 11) {
        if(d == 31) {
            valido = false;
        }
    }
    
    return valido;
}

int main() {
    int dia, mes, ano;
    
    cin >> dia >> mes >> ano;
    
    if(validaData(dia, mes, ano)) {
        cout << "data valida" << endl;
    } else {
        cout << "data invalida" << endl;
    }
    
    
    return 0;
}