#include <iostream>
#include <cstdio>
using namespace std;

//versao 2: usando operador logico && (and)

int main() {
	//Declaracao de variaveis
	int largura, peso;
	
	//Le os dados do caminhao
	cout << "Digite a largura e o peso do caminhao: ";
	cin >> largura >> peso;
	
	//Fazer o teste
	if (largura <= 3 && peso <=	10)
		cout << "Pode passar\n";
	else
		cout << "Nao pode passar\n";
	
	return 0;
}






