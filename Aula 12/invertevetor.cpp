#include <iostream>
using namespace std;

//Le um vetor e inverte seu conteudo

int main() {
	int v[100];
	int n;
	
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> v[i];

	int aux;
	for(int i=0;i<n/2;i++) {	//Ate a metade para nao "desinverter" o que ja inverteu
		aux = v[i];				//Troca primeiro com ultimo, segundo com penultimo, ...
		v[i] = v[n-1-i];
		v[n-1-i] = aux;
	}
	
	cout << v[0];
	for(int i=1;i<n;i++)
		cout << " " << v[i];
	cout << endl;
	
	return 0;
}








