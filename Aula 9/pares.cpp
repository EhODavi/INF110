#include <iostream>
using namespace std;

//Escreve os numeros pares de 1 a N

int main() {
	int n;
	int i;
	
	cin >> n;
	
	for(i=1;i<=n;i++)
		if (i%2==0)
			cout << i << " ";
		
	return 0;
}