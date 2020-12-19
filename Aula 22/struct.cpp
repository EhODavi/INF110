#include <iostream>
#include <cstring>
using namespace std;

struct Viagem {
	char origem[50];
	char destino[50];
	int dist;
	double tempo;
};

void escreve(Viagem t) {
	cout << "Viagem de " << t.origem << " para " << t.destino
	     << " tem " << t.dist << "km e dura " << t.tempo << " horas\n";
}

Viagem le() {
	Viagem t;
	cin.getline(t.origem,50);
	cin.getline(t.destino,50);
	cin >> t.dist >> t.tempo;
	return t;
}

int main() {
	int n;
	
	cout << "Quantas viagens? ";
	cin >> n;
	Viagem v[n];
	
	cin.ignore();	//descarta o '\n' apos o numero de viagens
	for(int i=0;i<n;i++) {
		v[i] = le();
		cin.ignore(); //descarta o '\n' apos o tempo
	}

	for(int passo=0;passo<n-1;passo++)
		for(int i=0;i<n-1;i++)
			if (v[i].dist > v[i+1].dist) {
				Viagem aux;
				aux = v[i];
				v[i]= v[i+1];
				v[i+1] = aux;
			}
	
	cout << "Por ordem de distancia:\n";
	for(int i=0;i<n;i++)
		escreve(v[i]);

	
	for(int passo=0;passo<n-1;passo++)
		for(int i=0;i<n-1;i++)
			if (strcmp(v[i].origem,v[i+1].origem)>0 ||
		        (strcmp(v[i].origem,v[i+1].origem)==0 && strcmp(v[i].destino,v[i+1].destino)>0) ) {
				Viagem aux;
				aux = v[i];
				v[i]= v[i+1];
				v[i+1] = aux;
			}
	
	cout << "Por ordem alfabetica de origem-destino\n";
	for(int i=0;i<n;i++)
		escreve(v[i]);
	
	return 0;
}

	