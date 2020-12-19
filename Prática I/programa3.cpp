//Programa 3: Volume de uma Caixa
#include <iostream>
using namespace std;

int main() {
    int largura, altura, comprimento, volume; //Dimensões 
    
    cout << "Escreva o valor das dimensões da caixa (largura, altura e comprimento): ";
    cin >> largura >> altura >> comprimento; // Lê os dados
    
    volume = largura * altura * comprimento; // Faz os cálculos
    
    cout << "\nCÁLCULO DO VOLUME DA CAIXA\n";
    cout << "Volume: " << volume << "\n";
    return 0;
}