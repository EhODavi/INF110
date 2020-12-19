#include <iostream>
using namespace std;

int le() {
	int x;
	cout << "Digite um valor inteiro: ";
	cin >> x;
	return x;
}

int main() {
	int a, b;
	a = le();
	b = le();
	cout << a + b << endl;
	return 0;
}
