#include <iostream>
using namespace std;

int main() {
	int n;
	int i;
	int divisores;
	int limite;
	
	cin >> limite;
	
	for(n=1; n<=limite; n++) {
		divisores = 0;
		for(i = 1; i <= n; i++)
			if (n % i == 0)
				divisores++;
		if (divisores==2)
			cout << n << " ";
	}
	
	return 0;
}
	