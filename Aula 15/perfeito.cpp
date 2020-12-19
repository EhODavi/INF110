#include <iostream>
using namespace std;

//Retorna a quantidade de digitos pares de n
int somadivisores(int n) {
	int soma = 0;
	
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			soma += i;
		}
	}

	return soma;
}

int main() {
	int x;

	cin >> x;
	while (x != 0) {
		if (somadivisores(x) > x) {
			cout << "Abundante" << endl;
		}
		else if (somadivisores(x) == x) {
			cout << "Perfeito" << endl;
		}
		else {
			cout << "Deficiente" << endl;
		}
		cin >> x;
	}

	return 0;
}








