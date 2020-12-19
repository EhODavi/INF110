#include <iostream>
using namespace std;

struct TipoAluno {
	int matricula;
	char nome[50];
	int nota[3];
	double notafinal;
};

void le(TipoAluno &a) {
	cout << "Matricula: ";
	cin >> a.matricula;
	cout << "Nome: ";
	cin >> a.nome;
	cout << "Suas 3 notas: ";
	for(int i=0;i<3;i++)
		cin >> a.nota[i];
}

void calculatotal(TipoAluno &a) {
	a.notafinal = (a.nota[0]+a.nota[1]+a.nota[2])/3.0;
}

int main() {
	int n;
	cin >> n;
	TipoAluno aluno[n];
	
	for(int i=0;i<n;i++)
		le(aluno[i]);
	
	for(int i=0;i<n;i++)
		calculatotal(aluno[i]);
	
	cout << "Aprovados:\n";
	for(int i=0;i<n;i++)
		if (aluno[i].notafinal>=60)
			cout << aluno[i].nome << endl;
		
	cout << "Reprovados:\n";
	for(int i=0;i<n;i++)
		if (aluno[i].notafinal<60)
			cout << aluno[i].nome << endl;
	
	return 0;
}

	