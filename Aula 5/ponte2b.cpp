#include <iostream>
#include <cstdio>
using namespace std;

//versao 2b: usando operador logico || (ou) - verifica se excede limites

int main() {
	//Declaracao de variaveis
	int largura, peso;
	
	//Le os dados do caminhao
	cout << "Digite a largura e o peso do caminhao: ";
	cin >> largura >> peso;
	
	//Fazer o teste
	if (largura > 3 || peso > 10)
		cout << "Nao pode passar\n";
	else
		cout << "Pode passar\n";
	
	return 0;
}






