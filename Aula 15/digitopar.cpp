#include <iostream>
using namespace std;

//Retorna a quantidade de digitos pares de n
int contpar(int n) {
	int cont = 0;
	while(n>0) {
		int d = n%10;	//Pega o ultimo digitos
		if (d%2==0)		//Se for par, conta
			cont++;
		n /=10;			//Retira o ultimo digito
	}
	return cont;
}

int main() {
	int x;
	
	cin >> x;
	while(x!=0) {
		cout << x << " tem " << contpar(x) << " digitos pares." << endl;
		cin >> x;
	}
	
	return 0;
}








