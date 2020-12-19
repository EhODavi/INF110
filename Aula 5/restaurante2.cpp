#include <iostream>
#include <cstdio>
using namespace std;

//versao 2: informa se tem troco ou quanto falta pagar

int main() {
	//Declaracao de variaveis
	int comida, bebida, sobremesa, valortotal;
	int valorpago, troco;
	
	//Le as notas das provas
	cout << "Digite consumo em comida: ";
	cin >> comida;
	cout << "Digite o consumo em bebida: ";
	cin >> bebida;
	cout << "Digite o consumo em sobremesa: ";
	cin >> sobremesa;	

	cout << "Digite o valor pago: ";
	cin >> valorpago;
	
	//Calcula o total
	valortotal = comida + bebida + sobremesa;
	
	//Escreve o resultado
	if (valorpago >= valortotal) {
		troco = valorpago - valortotal;
		cout << "O troco e' " << troco << endl;
	}
	else {
		cout << "Nao pagou suficiente\n";
		cout << "Falta pagar " << valortotal - valorpago << endl;
	}
	
	
	return 0;
}






