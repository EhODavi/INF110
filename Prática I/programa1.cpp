//Programa 1: calculo da nota final de um candidato a monitoria
#include <iostream>
using namespace std;

int main() {
    int entrevista, curriculo, prova; // notas do candidato
    int total; // total de pontos
    double media; // media de pontos
    
    //Leitura dos dados
    cout << "Escreva a nota da entrevista: ";
    cin >> entrevista;
    cout << "Escreva a nota do curriculo: ";
    cin >> curriculo;
    cout << "Escreva a nota da prova: ";
    cin >> prova;
    
    //Calculo do resultado
    total = entrevista + curriculo + prova;
    media = total / 3.0;
    
    cout << "Nota final do candidato: " << total << endl;
    cout << "Média do candidato: " << media << endl;
    
    return 0;
}