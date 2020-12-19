#include <iostream>
using namespace std;

int maior(int a, int b, int c) {
	if (a>=b && a>=c)
		return a;
	if (b>=c)
		return b;
	return c;
}

int main() {
	int x,y,z;
	
	cin >> x >> y >> z;
	cout << maior(x,y,z) << endl;
	
	return 0;
}








