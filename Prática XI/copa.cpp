#include <iostream>
#include <cstring>

using namespace std;

struct TipoPartida {
	char time1[31], time2[31];
	int placar1, placar2;
};

int main() {
	TipoPartida partida[50];
	char selecoes[4][31];
	int N;
	char x;
	int numpontos[4] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> partida[i].time1 >> partida[i].placar1 >> x >> partida[i].placar2 >> partida[i].time2;
	}

	cin.ignore();

	for (int i = 0; i < 4; i++) {
		cin >> selecoes[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < N; j++) {
			if (strcmp(partida[j].time1, selecoes[i]) == 0) {
				if (partida[j].placar1 > partida[j].placar2) {
					numpontos[i] += 3;
				} else if (partida[j].placar1 == partida[j].placar2) {
					numpontos[i] += 1;
				}
			} else if (strcmp(partida[j].time2, selecoes[i]) == 0) {
				if (partida[j].placar2 > partida[j].placar1) {
					numpontos[i] += 3;
				} else if (partida[j].placar2 == partida[j].placar1) {
					numpontos[i] += 1;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << selecoes[i] << " " << numpontos[i]
	}

	return 0;
}