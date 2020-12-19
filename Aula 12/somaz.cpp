#include <iostream>
using namespace std;

//Le um lista de numeros e um valor Z
//Informa quais pares de elementos da lista tem soma = Z

int main() {
	int n, z;
	int v[1000];
	
	cout << "Quantidade N de elementos: ";
	cin >> n;
	
	cout << "Lista de elementos: ";
	for(int i=0;i<n;i++) {
		cin >> v[i];
	}

	cout << "Valor Z da soma: ";
	cin >> z;
	
	cout << "Pares de elementos com soma " << z << endl;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if (v[i] + v[j] == z)
				cout << v[i] << " e " << v[j] << endl;
	
	
	return 0;
}

















