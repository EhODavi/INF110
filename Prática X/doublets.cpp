#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char palavra1[101], palavra2[101];
	int contador = 0, N;

	cin >> palavra1;
	cin >> palavra2;

	if(strlen(palavra1) >= strlen(palavra2)) {
		N = strlen(palavra2);
	} else {
		N = strlen(palavra1);
	}

	for(int i = 0; i < N; i++) {
		if(palavra1[i] != palavra2[i]) {
			contador++;
		}
	}

	if(contador == 1 && strlen(palavra1) == strlen(palavra2)) {
		cout << "SIM" << endl;
	} else {
		cout << "NAO" << endl;
	}

	return 0;
}