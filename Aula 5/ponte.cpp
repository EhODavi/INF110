#include <iostream>
#include <cstdio>
using namespace std;

//versao 1: sem operador logico

int main() {
	//Declaracao de variaveis
	int largura, peso;
	
	//Le os dados do caminhao
	cout << "Digite a largura e o peso do caminhao: ";
	cin >> largura >> peso;
	
	//Fazer os testes
	if (largura <= 3) {
		if (peso <=	10)
			cout << "Pode passar\n";
		else
			cout << "Nao pode passar (excede peso)\n";
	}
	else
		cout << "Nao pode passar (excede largura)\n";  //talvez peso tambem
	
	return 0;
}






