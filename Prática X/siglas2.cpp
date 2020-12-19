#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {

	char sigla[201];
	char frase[201];

	cin.getline(sigla, 201);
	cin.getline(frase, 201);

	int posicao[201];
	int contador = 0;

	for(int i = 0; i < strlen(sigla); i++) {
		posicao[i] = -1;
	}


	for (int i = 0; sigla[i] != '\0'; i++) {
		for (int j = 0; frase[j] != '\0'; j++) {
			if (i == 0) {
				if (sigla[i] == frase[j]) {
					posicao[i] = j;
					break;
				}
			}
			else {
				if (sigla[i] == frase[j] && j > posicao[i - 1]) {
					posicao[i] = j;
					break;
				}
			}

		}
	}

	for (int i = 0; i < strlen(sigla); i++) {
		if (posicao[i] == -1) {
			contador++;
		}
	}

	if (contador == 0) {

		for (int i = 0; i < strlen(sigla) - 1; i++) {
			if (posicao[i] > posicao[i + 1]) {
				contador++;
			}
		}

		if (contador == 0) {
			cout << "SIM" << endl;
		}
		else {
			cout << "NAO" << endl;
		}

	}
	else {
		cout << "NAO" << endl;
	}


	return 0;
}