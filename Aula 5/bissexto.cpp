#include <iostream>
using namespace std;

//Le um ano e informa se ele e' bissexto (anos multiplos de 4)
//ATENCAO: esta e' uma versao incompleta, existem excecoes a esta regra

int main() {
	int ano;
	
	cin >> ano;
	if (ano%4==0)
		cout << ano << " e' bissexto\n";
	
	return 0;
}
