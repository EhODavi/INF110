#include <iostream>
#include <iomanip>

using namespace std;

struct Horario {
	int horas, minutos;
};

void escreve(Horario h) {
	if (h.horas > 12) {
		cout << setfill('0') << setw(2) << (h.horas - 12) << ":" << setfill('0') << setw(2) << h.minutos << " PM";
	} else if (h.horas == 12) {
		cout << setfill('0') << setw(2) << h.horas << ":" << setfill('0') << setw(2) << h.minutos << " PM";
	} else if (h.horas == 0) {
		cout << setfill('0') << setw(2) << (h.horas + 12) << ":" << setfill('0') << setw(2) << h.minutos << " AM";
	} else {
		cout << setfill('0') << setw(2) << h.horas << ":" << setfill('0') << setw(2) << h.minutos << " AM";
	}

	cout << endl;
}

int main() {
	int N;
	Horario hora;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> hora.horas >> hora.minutos;
		escreve(hora);
	}

	return 0;
}