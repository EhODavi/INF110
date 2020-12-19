#include <iostream>
using namespace std;

//Le uma lista de produtos (precos e quantidade comprada)
//e imprime uma nota fiscal com a relacao de produtos e total da compra

int main() {
	int qt[100];
	int preco[100];
	int i, n;
	int total;
	
	//Entrada de dados
	cout << "Numero de produtos: ";
	cin >> n;
	
	cout << "Preco de cada produto: ";
	for(i=0;i<n;i++)
		cin >> preco[i];
	
	cout << "Quantidade comprada de cada produto: ";
	for(i=0;i<n;i++)
		cin >> qt[i];
	
	//Calculo e impressao da nota fiscal
	total = 0;
	for(i=0;i<n;i++) {
		cout << qt[i] << " x " << preco[i] << " => " << qt[i]*preco[i] << endl;
		total += qt[i] * preco[i];
	}
	cout << "TOTAL => " << total << endl;
	
	return 0;
}
