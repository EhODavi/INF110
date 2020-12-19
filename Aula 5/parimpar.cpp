#include <iostream>
using namespace std;

//le um numero e informa se ele e' par ou impar

int main() {
	int x;

	cin >> x;

	if (x%2==0) {
        cout << x << " e' par\n";
	} else {
        cout << x << " e' impar\n";
	};

	return 0;
}
