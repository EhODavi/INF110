#include <iostream>
#include <iomanip>
using namespace std;

//Solucao exercicio 1 - matrizes
//
//- Ler as notas de 5 alunos em 3 provas
//- Calcular e armazenar a nota total de cada aluno
//- Calcular e armazenar a média das notas de cada prova
//- Imprimir todos os resultados


int main() {
	int nota[5][3];
	int i,j;
	int totalaluno[5];
	int totalprova[3];
	double media[3];
	
	for(i=0;i<5;i++) {
		cout << "Estudante: " << i+1 << endl;
		for(j=0;j<3;j++) {
			cout << "Prova " << j+1 << ": ";
			cin >> nota[i][j];
		}
	}

	for(i=0;i<5;i++) {
		totalaluno[i] = 0;
		for(j=0;j<3;j++)
			totalaluno[i] += nota[i][j];
	}
	
	for(j=0;j<3;j++) {
		totalprova[j] = 0;
		for(i=0;i<5;i++)
			totalprova[j] += nota[i][j];
	}
	
	for(j=0;j<3;j++)
		media[j] = totalprova[j]/5.0;
	 
	 
	 for(i=0;i<5;i++) {
		 cout << "Aluno " << i+1 << " - ";
		 for(j=0;j<3;j++)
			 cout << setw(4) << nota[i][j];
		 cout << " - Total: " << totalaluno[i] << endl;
	 }
	 
	 cout << "Media das provas: ";
	 for(j=0;j<3;j++)
		 cout << fixed << setprecision(1) << media[j] << " ";
	 cout << endl;
		 
		
	return 0;
}

