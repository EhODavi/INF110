#include <iostream>
using namespace std;

//Le os dados (idade, sexo, altura) de 10 atletas
//Informa a media das idades; informa ainda a media de altura, por sexo

int main() {
	int idade[10];
	char sexo[10];
	double altura[10];
	int i;
	
	for (i=0;i<10;i++) {
		cout << "Dados do atleta " << i+1 << endl;
		cout << "Altura: ";
		cin >> altura[i];
		cout << "Sexo(M/F): ";
		cin >> sexo[i];
		cout << "Idade: ";
		cin >> idade[i];
	}
	
	int totalidade = 0;
	for(i=0;i<10;i++)
		totalidade += idade[i];
	
	cout << "Media das idades: "  << (double)totalidade/10 << endl;
	
	double totalalturaf = 0;
	double totalalturam = 0;
	int contm = 0, contf = 0;
	for(i=0;i<10;i++)
		if (sexo[i] == 'M') {
			totalalturam += altura[i];
			contm++;
		}
		else {
			totalalturaf += altura[i];
			contf++;
		}
		
	cout << "Media altura masculina: ";
	if (contm>0)
		cout << totalalturam/contm << endl;
	else
		cout << "-" << endl;
	
	cout << "Media altura feminina: ";
	if (contf>0)
		cout << totalalturaf/contf << endl;
	else
		cout << "-" << endl;
	
	return 0;
}
