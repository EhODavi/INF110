#include <iostream>

using namespace std;

struct Aluno {
	int matricula, nota;
};

int main() {
	int T;

	cin >> T;

	Aluno alunos[T];

	for (int i = 0; i < T; i++) {
		cin >> alunos[i].matricula >> alunos[i].nota;
	}

	for (int passo = 0; passo < T - 1; passo++) {
		for (int i = 0; i < T - 1; i++) {
			if (alunos[i].matricula > alunos[i + 1.matricula]) {
				Aluno auxiliar;
				auxiliar = alunos[i + 1];
				alunos[i + 1] = alunos[i];
				alunos[i] = auxiliar;
			}
		}
	}

	for (int i = 0; i < T; i++) {
		cout << alunos[i].matricula << alunos[i].nota << endl;
	}

	return 0;
}