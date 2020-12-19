#include <iostream>
using namespace std;

//Le uma palavra e a escreve invertida
//(obs.: digite um '.' apos digitar a palavra)

int main() {
	char v[100];
	int n;
	
	int i = 0;
	char letra;
	cin >> letra;		//le a primeira letra
	
	while(letra!='.') {	//le ate achar o .
		v[i] = letra;	//	guarda a letra
		i++;
		cin >> letra;	//	e le a proxima
	}
	
	n = i;		//guarda a quantidade de letras lidas
	
	char aux;
	for(int i=0;i<n/2;i++) {	//inverte o conteudo do vetor (a palavra armazenada)
		aux = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = aux;
	}
	
	for(int i=0;i<n;i++)		//escreve resultado
		cout << v[i];
	
	return 0;
}








