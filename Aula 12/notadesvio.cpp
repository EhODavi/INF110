#include <iostream>
#include <cmath>
using namespace std;

//Le uma lista de 10 notas e calcula
//- media
//- maior
//- menor
//- quantas acima da media
//- desvio padrao

int main() {
	int nota[10];
	int total;
	
	for(int i=0;i<10;i++)		//leitura das notas
		cin >> nota[i];
	
	total = 0;
	for(int i=0;i<10;i++)		//acumula total das notas e...
		total += nota[i];

	double media = total/10.0;	//... calcula a media
	
	cout << "Media = " << media << endl;
	
	int maior = 0;				//encontra a maior nota
	for(int i=0;i<10;i++)
		if (nota[i]>maior)
			maior = nota[i];
	
	int menor = 100;			//encontra a menor nota
	for(int i=0;i<10;i++)
		if (nota[i]<menor)
			menor = nota[i];
	
	cout << "Maior nota = " << maior << endl;
	cout << "Menor nota = " << menor << endl;
	
	int acima = 0;				//conta quantos estao acima da media
	for(int i =0;i<10;i++)
		if (nota[i] > media)
			acima++;
	cout << "Acima da media da turma = " << acima << endl;
	
	double desvio;
	double total2 = 0;
	
	for(int i=0;i<10;i++)		//calcula o desvio padrao
		total2 += pow(nota[i]-media,2);
	
	cout << "Desvio padrao = " << sqrt(total2/10) << endl;
	
	return 0;
}














