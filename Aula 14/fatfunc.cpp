#include <iostream>
using namespace std;

long long int fat(int n) {
	long long int f = 1;
	for(int i=1;i<=n;i++)
		f *= i;
	return f;
}

int main() {
	int n;
	
	cin >> n;
	cout << fat(n) << endl;
	
	return 0;
}
