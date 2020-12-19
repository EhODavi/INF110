#include <iostream>
using namespace std;

int main() {
	int a[100];
	int b[100];
	int prod[100];
	int i, n;
	
	cout << "Tamanho do vetor: ";
	cin >> n;
	
	cout << "Vetor A: ";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	cout << "Vetor B: ";
	for(i=0;i<n;i++)
		cin >> b[i];
	
	//Calcula o produto
	for(i=0;i<n;i++)
		prod[i] = a[i] * b[i];

	//Escreve o resultado
	for(i=0;i<n;i++)
		cout << prod[i] << " ";
	
	cout << endl;
	
	return 0;
}
