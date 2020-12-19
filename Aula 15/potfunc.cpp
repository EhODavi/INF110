#include <iostream>
using namespace std;

long long int potencia(int base, int expoente) {
	long long int p = 1;
	for(int i=1;i<=expoente;i++)
		p *= base;
	return p;
}

int main() {
	int x, y;

	cin >> x >> y;
	cout << potencia(x,y) << endl;
	
	return 0;
}
