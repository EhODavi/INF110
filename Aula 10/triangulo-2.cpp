#include <iostream>
using namespace std;

//versao sem a variaval tamanho
//o proprio i (contador de linhas) indica a quantidade de *

int main() {
	int n;
	int i, j;
	
	cin >> n;
	
	for(i=1;i<=n;i++) {		//n linhas
		for(j=1;j<=i;j++)	//asteriscos
			cout << '*';
		cout << endl;
	}
	
	return 0;
}


