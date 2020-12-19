#include <iostream>
using namespace std;

//Determina se N e' primo

int main() {
	int n;
	int divisores = 0;
	int i;
	
	cin >> n;
	
	for(i=1;i<=n;i++)
		if (n%i == 0)
			divisores++;
	
	if (divisores==2)
		cout << n << " e' primo\n";
	else
		cout << n << " nao e' primo\n";
		
	return 0;
}