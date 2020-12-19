#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Sorteia e imprime 6 numeros da megasena
//(obs.: nao verifica se sorteou repetido)

int main() {
	srand(time(0));
	int n[6];
	int i;
	
	for(i=0;i<6;i++)
		n[i] = rand()%61;
	
	for(i=0;i<6;i++)
		cout << n[i] << endl;
	
	return 0;
}
