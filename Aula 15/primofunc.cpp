#include <iostream>
#include <cmath>
using namespace std;

bool primo(int n) {
	for(int i=2;i<=n-1;i++)
		if(n%i==0)
			return false;
	
	return true;
}


int main() {
	for(int i=2;i<=1000;i++)
		if (primo(i))
			cout << i << " ";
	cout << endl;
	
	return 0;
}
