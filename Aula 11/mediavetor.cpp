#include <iostream>
using namespace std;

//Le as notas de 10 alunos na prova 1, depois da prova2
//e por fim escreve a media obtida por cada aluno

int main() {
	int prova1[10], prova2[10];
	double media[10];
	int i;
	
	cout << "Digite as notas dos 10 alunos na prova 1: ";
	for(i=0;i<10;i++)
		cin >> prova1[i];

	cout << "Digite as notas dos 10 alunos na prova 2: ";
	for(i=0;i<10;i++)
		cin >> prova2[i];

	for(i=0;i<10;i++)
		media[i] = (prova1[i] + prova2[i])/2.0;
	
	for(i=0;i<10;i++)
		cout << media[i] << " ";
	cout << endl;
	
	return 0;
}
