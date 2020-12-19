#include <iostream>
using namespace std;

int main() {
	char letra;
	
	for(letra = 'A'; letra <= 'Z'; letra++)
		cout << letra;
	cout << endl;
	
	for(letra = 'z'; letra >= 'a'; letra--)
		cout << letra;
	cout << endl;

	return 0;
}