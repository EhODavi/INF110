//Programa 4: Salário Total de um Funcionário
#include <iostream>
using namespace std;

int main() {
    int salarioBase, valorHoraExtra, numHorasExtras, salarioTotal; //Dados do Funcionário 
    
    cout << "Escreva os dados do Funcionário (Salário Base, Valor da Hora Extra e Número de Horas Extras Trabalhadas): ";
    cin >> salarioBase >> valorHoraExtra >> numHorasExtras; // Lê os dados
    
    salarioTotal = salarioBase + numHorasExtras * valorHoraExtra; // Faz os cálculos
    
    cout << "\nCÁLCULO DO SALÁRIO TOTAL DO FUNCIONÁRIO\n";
    cout << "Salário TOtal: " << salarioTotal << "\n";
    return 0;
}