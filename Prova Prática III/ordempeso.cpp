#include <iostream>

using namespace std;

struct Capivara {
    char nome[16];
    int matricula;
    int peso;
    int altura;
};

int main() {
    int C;
    
    cin >> C;
    
    Capivara capivaras[C];
    
    for(int i = 0; i < C; i++) {
        cin >> capivaras[i].nome >> capivaras[i].matricula >> capivaras[i].peso >> capivaras[i].altura;
    }
    
    for(int passo = 0; passo < C - 1; passo++) {
        for(int i = 0; i < C - 1; i++) {
            if(capivaras[i].peso > capivaras[i + 1].peso) {
                Capivara auxiliar;
                auxiliar = capivaras[i + 1];
                capivaras[i + 1] = capivaras[i];
                capivaras[i] = auxiliar;
            }
        }
    }
    
    
    for(int i = 0; i < C; i++) {
        cout << capivaras[i].nome << ";" << capivaras[i].matricula << ";" << capivaras[i].peso << ";" << capivaras[i].altura << endl;
    }
    
    return 0;
}