#include <iostream>
using namespace std;

//Calcula o somatorio dos valores de A ate B

int main() {
	int i;
	int A, B;
	int soma = 0;
	
	cin >> A >> B;
	
	for(i=A; i<=B; i++)
		soma += i;
	
	cout << soma << endl;
	
	return 0;
}