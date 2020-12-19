#include <iostream>
using namespace std;

//le uma lista de numeros e verifica se estao em ordem crescente

int main() {
	int v[100];
	int n;
	
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> v[i];

	bool ok = true;
	
	for(int i=0;i<n-1;i++)
		if (v[i] > v[i+1])	//se algum e' maior que o proximo
			ok = false;		//	nao esta na ordem
	
	if (ok)
		cout << "Crescente\n";
	else
		cout << "Nao\n";
	
	return 0;
}
