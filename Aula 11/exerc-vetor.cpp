#include <iostream>
using namespace std;

//Le um vetor e imprime de varias formas
//Pesquisa de um dado valor esta presente no vetor

int main() {
	int v[10];
	int i;
	
	//Leitura do vetor
	for(i=0;i<10;i++)
		cin >> v[i];
	
	cout << "De tras pra frente: ";
	for(i=9;i>=0;i--)
		cout << v[i] << " ";
	cout << endl;
	
	cout << "Somente os pares: ";
	for(i=0;i<10;i++)
		if (v[i]%2==0)
			cout << v[i] << " ";
	cout << endl;
	
	cout << "Somente posicao par: ";
	for(i=0;i<10;i++)
		if (i%2==0)
			cout << v[i] << " ";
	cout << endl;
	
	int valor;
	cout<< "Digite um valor: ";
	cin >> valor;
	
	bool existe = false;
	for(i=0;i<10;i++)
		if (v[i]==valor)
			existe = true;
		
	if (existe)
		cout << "Existe\n";
	else
		cout << "Nao existe\n";
			
	return 0;
}



