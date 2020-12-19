#include <iostream>
using namespace std;

//Le votos de N eleitores para candidatos de 1 a 10
//Informa os candidatos com maior numero de votos

int main() {
	int cont[11] = {0};	//contado de votos dos candidatos 1 a 10 (posicao 0 nao usada)
	int n;
	int voto;
	int cand;
	
	cout << "Informe o numero de candidatos e de eleitores: ";
	cin >> cand >> n;
	
	cout << "Informe os votos dos " << n << " eleitores (valores de 1 a " << cand << ")\n";
	for(int i=0;i<n;i++) {
		cin >> voto;		//le voto
		while(voto<1 || voto>cand) {
			cout << "Voto invalido, candidatos 1 a " << cand << "! Digite novamente: ";
			cin >> voto;
		}
		cont[voto]++;		//aumenta contador daquele voto
	}

	int maior = 0;
	for(int i=1;i<=cand;i++)	//procura o maior valor de votos
		if (cont[i]>maior) {
			maior = cont[i];
		}
	
	cout << "Vencedor(es) ";
	
	for(int i=1;i<=cand;i++)	//imprime todos com a maior quantidade de votos
		if (cont[i]==maior)
			cout << i << " ";
	
	return 0;
}

















