#include <iostream>
using namespace std;

int main() {
	char campo[100][100];
	int n;
	int i,j;
	
	cin >> n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> campo[i][j];
		
	int linha, coluna;
	
	do {
		cin >> linha >> coluna;
		if (linha==0 && coluna==0) break;
		cout << linha << " " << coluna << " => ";
		i = linha-1;	//leitura considera linhas 1 2 3..., mas a matriz e' 0 1 2...
		j = coluna-1;
		if (campo[i][j]=='X')		//tem bomba no local
			cout << "Bomba\n";
		else if ( (i>0 && campo[i-1][j]=='X')		//tem bomba acima
				|| (i<n-1 && campo[i+1][j]=='X')	//tem bomba abaixo
				|| (j>0 && campo[i][j-1]=='X')		//tem bomba a esquerda
				|| (j<n-1 && campo[i][j+1]=='X') )	//tem bomba a direita
			cout << "Encostado\n";
		else
			cout << "Livre\n";
		
	} while(true);

	return 0;
}







