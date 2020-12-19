#include <iostream>
#include <cstdlib>		//para rand e srand
#include <ctime>		//para time
using namespace std;

int main() {
	int secreto;	//numero sorteado pelo programa
	int palpite;	//palpite do usuario
	int cont;		//contador de tentativas
	
	srand(time(0));			//inicia o modo aleatorio
	secreto = rand() % 10; 	//sorteia valor no intervalo [0,10)
	
	cout << "Tente adivinhar: ";
	cin >> palpite;
	cont = 1;
	
	while(palpite != secreto) {
		cout << "Errou!!!\nTente novamente: ";
		cin >> palpite;
		cont++;
	}

	cout << "Acertou!!!\n Tentou " << cont << " vezes.\n";
	
	return 0;
}










