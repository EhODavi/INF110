#include <iostream>
using namespace std;

//Escreve os divisores de N

int main() {
	int n;
	int i;
	
	cin >> n;
	
	for(i=1;i<=n;i++)
		if (n%i == 0)
			cout << i << endl;
		
	return 0;
}