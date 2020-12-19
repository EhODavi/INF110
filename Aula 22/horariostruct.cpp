#include <iostream>
#include <iomanip>
using namespace std;

struct Horario {
	int horas, minutos;
};

void le(Horario &t) {
	cin >> t.horas >> t.minutos;
}

void escreve(Horario t) {
	cout << setfill('0') << setw(2) << t.horas << ":"
	     << setfill('0') << setw(2) << t.minutos;
}

//Calcula a diferenca entre dois horarios
Horario calcdif (Horario i, Horario f) {
	Horario t;
	t.horas = f.horas - i.horas;
	t.minutos = f.minutos - i.minutos;
	if (t.minutos <0) {
		t.minutos += 60;
		t.horas -= 1;
	}
	return t;
}

int main() {
	Horario inicio, fim;
	
	le(inicio);
	le(fim);
	
	Horario diferenca;
	diferenca = calcdif(inicio,fim);
	
	cout << "De ";
	escreve(inicio);
	cout << " ate ";
	escreve(fim);
	cout << " tem ";
	escreve(diferenca);
	cout << " horas\n";
	
	return 0;
}
