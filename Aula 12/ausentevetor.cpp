#include <iostream>
using namespace std;

//Le uma lista de N numeros de valores quaiser (entre 1 e N)
//Informa quais numeros nao aparecem na lista

int main() {
	int n;
	int num;

	//Le a quantidade de elementos
	cin >> n;
	
	//booleano que indica se cada valor (de 1 a n) aparece
	bool aparece[n+1] = {false};	//declarado com n+1 pois se fosse seriam de 0..n-1
	
	//le a lista de numeros
	for(int i=0;i<n;i++) {
		cin >> num;
		aparece[num] = true;	//marca que o numero lido aparece
	}

	cout << "Nao aparecem: ";

	//Informa os que nao aparecem (eles terminaram marcados com false
	for(int i=1;i<=n;i++)
		if (!aparece[i])
			cout << i << " ";
	
	return 0;
}
