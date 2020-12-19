#include <iostream>
using namespace std;

//Escreve os numeros pares entre A e B

int main() {
	int a,b;
	int i;
	
	cin >> a >> b;
	
	for(i=a;i<=b;i++)
		if (i%2==0)
			cout << i << " ";
		
	return 0;
}