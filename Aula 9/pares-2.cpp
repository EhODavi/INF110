#include <iostream>
using namespace std;

//Escreve os numeros pares de 1 a N
//(versao que incrementa de 2 em 2 (so os pares)

int main() {
	int n;
	int i;
	
	cin >> n;
	
	for(i=2;i<=n;i+=2)
		cout << i << " ";
		
	return 0;
}