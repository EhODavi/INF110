//Programa 2: caixa de restaurante
#include <iostream>
using namespace std;

int main() {
    int comida, bebida, sobremesa; // consumo
    int valordaconta, valorpago, troco; // outros valores
    
    cout << "Escreva o valor consumido em comida, bebida e sobremesa ";
    cin >> comida; 
    cin >> bebida; 
    cin >> sobremesa; // Lê os dados
    cout << "Escreva o valor pago pelo cliente: ";
    cin >> valorpago;
    
    valordaconta = comida + bebida + sobremesa; // Faz os cálculos
    troco = valorpago - valordaconta;
    
    cout << "\n\nRESTAURANTE PEGUE E PAGUE\n";
    cout << "Consumo: " << comida << " + " << bebida << " + " << sobremesa << " = ";
    cout << valordaconta << "\n";
    cout << "Valor Pago: " << valorpago << "\n";
    cout << "Troco: " << troco << "\n";
    cout << "Volte sempre!\n";
    return 0;
}