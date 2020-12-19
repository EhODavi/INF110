#include <iostream>
using namespace std;

int leintervalo(int inf, int sup) {
	int a;
	cout << "Digite um valor entre " << inf << " e " << sup << ": ";
	cin >> a;
	while(a<inf || a>sup) {
		cout << "Valor invalido, digite um valor entre " << inf << " e " << sup << ": ";
		cin >> a;
	}
	return a;
}

int main() {
	int a, b, c;
	
	a = leintervalo(0,10);
	b = leintervalo(10,20);
	c = leintervalo(50,100);
	
	cout << "Ok, voce digitou " << a << " " << b << " "  << c << endl;

	
	return 0;
}