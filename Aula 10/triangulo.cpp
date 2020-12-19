#include <iostream>
using namespace std;

int main() {
	int n;
	int i, j;
	int tamanho = 1;
	
	cin >> n;
	
	for(i=1;i<=n;i++) {			//n linhas
		for(j=1;j<=tamanho;j++)	//asteriscos
			cout << '*';
		cout << endl;
		tamanho++;		//aumenta o numero de *
	}
	
	return 0;
}


