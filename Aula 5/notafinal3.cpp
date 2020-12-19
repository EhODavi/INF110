#include <iostream>
#include <cstdio>
using namespace std;

//versao 3: informa se foi reprovado

int main() {
	//Declaracao de variaveis
	int prova1, prova2, prova3, notafinal;
	
	//Le as notas das provas
	cout << "Digite a nota na prova 1: ";
	cin >> prova1;
	cout << "Digite a nota na prova 2: ";
	cin >> prova2;
	cout << "Digite a nota na prova 3: ";
	cin >> prova3;	

	//Calcula a nota final
	notafinal = prova1 + prova2 + prova3;
	
	//Escreve o resultado
	cout << "Sua nota final foi ";
	cout << notafinal << endl;

	if (notafinal < 60)
		cout << "Reprovado!\n";	
	
	return 0;
}






