#include <iostream>
using namespace std;

//triangulo de cabeca pra baixo
//versao sem variavel tamanho
//note a conta n-i+1 que calcula numero de * em funcao do numero da linha i

int main() {
	int n;
	int i, j;
	
	cin >> n;
	
	for(i=1;i<=n;i++) {			//n linhas
		for(j=1;j<=n-i+1;j++)	//asteriscos
			cout << '*';
		cout << endl;
	}
	
	return 0;
}


