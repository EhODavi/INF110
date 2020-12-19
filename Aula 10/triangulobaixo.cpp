#include <iostream>
using namespace std;

//triangulo de cabeca pra baixo

int main() {
	int n;
	int i, j;
	int tamanho;
	
	cin >> n;
	tamanho = n;
	
	for(i=1;i<=n;i++) {			//n linhas
		for(j=1;j<=tamanho;j++)	//asteriscos
			cout << '*';
		cout << endl;
		tamanho--;
	}
	
	return 0;
}


