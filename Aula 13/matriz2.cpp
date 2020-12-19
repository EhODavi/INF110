#include <iostream>
#include <iomanip>
using namespace std;

//Solucao exercicio 2 - matrizes
//
//Ler um tamanho N e uma matriz quadrada N x N
//Calcular e informar:
//- A média dos elementos da matriz
//- A quantiadade de elementos abaixo dessa média
//- A soma dos elementos da diagonal principal
//- O produto dos elementos da diagonal secundária


int main() {
	int n;
	
	cin >> n;
	int matriz[n][n];
	
	int i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> matriz[i][j];

	int total = 0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			total += matriz[i][j];
	
	double media = (double)total/(n*n);
	
	cout << "Media: " << media << endl;
	
	int contabaixo = 0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if (matriz[i][j] < media)
				contabaixo++;
	cout << "Abaixo da media: " << contabaixo << endl;
	
	//int totaldiagonal = 0;
	//for(i=0;i<n;i++)			//versao  mais lenta
	//	for(j=0;j<n;j++)		//percorre tudo
	//		if(i==j)			//e soma so a diagonal
	//			totaldiagonal += matriz[i][j];
	
	
	int totaldiagonal = 0;		//versao mais rapida
	for(i=0;i<n;i++)			//percorre so a diagonal
		totaldiagonal += matriz[i][i];
	
	cout << "Soma da diagonal principal: " << totaldiagonal << endl;
	
	int produtosecundaria = 1;
	for(i=0;i<n;i++) {
		produtosecundaria *= matriz[i][n-1-i];
	}
	
	cout << "Produto da diagonal secundaria: " << produtosecundaria << endl;
		
	return 0;
}







