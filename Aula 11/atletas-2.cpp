#include <iostream>
using namespace std;

//Le os dados (idade, sexo, altura) de 10 atletas
//Informa a media das idades; informa ainda a media de altura, por sexo

//(versao para quantidade variada de alunos, ate 1000

int main() {
	int idade[1000];
	char sexo[1000];
	double altura[1000];
	double alt;
	
	int i = 0;
	do {
		cout << "Dados do atleta " << i+1 << endl;
		cout << "Altura (0 p/ terminar): ";
		cin >> alt;
		if (alt==0) break;	//flag de fim de entrada
		altura[i] = alt;
		cout << "Sexo(M/F): ";
		cin >> sexo[i];
		cout << "Idade: ";
		cin >> idade[i];
		i++;
	} while(i<1000);		//interrompe caso acabe espaco do vetor

	int n = i;	//guarda quantidade de atletas
	
	int totalidade = 0;
	for(i=0;i<n;i++)
		totalidade += idade[i];
	
	cout << "Media das idades: "  << (double)totalidade/n << endl;
	
	double totalalturaf = 0;
	double totalalturam = 0;
	int contm = 0, contf = 0;
	for(i=0;i<n;i++)
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
