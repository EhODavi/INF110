#include <iostream>
using namespace std;

//Le um vetor e ordena seus elementos pelo metodo Bubblesort

int main() {
	int v[100000];
	int n;
	
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> v[i];
	
	for(int passo=0;passo<n-1;passo++) {	//Faz n-1 passadas
		for(int i=0;i<n-1;i++)				//Percorre o vetor
			if (v[i] > v[i+1]) {			//Se um elemento e' maior que o proximo
					int aux = v[i];			//Troca os dois de lugar
					v[i] = v[i+1];
					v[i+1] = aux;
			}
	}
	
	for(int i=0;i<n;i++)
		cout << v[i] << " ";
	
	return 0;
}










