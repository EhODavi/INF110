#include <iostream>
using namespace std;

//le uma lista e imprime os elementos repetidos
//(consideramos valores de 0 a 99)

int main() {
	int n;
	int v[1000];
	int rep[100] = {false};
	bool achei = false;
	
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> v[i];
	}

	for(int i=0;i<n;i++) {			//Para cada elemento
		for(int j=i+1;j<n;j++)		//	compara com os seguintes
			if (v[i] == v[j]) {		//	se achou igual
				rep[ v[i] ] = true;	//		marca que ele se repete
			}
	}
	
	for(int i=0;i<100;i++)		//imprime os que se repetem
		if (rep[i])
			cout << i << " ";
	
	return 0;
}
