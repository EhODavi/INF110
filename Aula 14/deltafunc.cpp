#include <iostream>
#include <cmath>
using namespace std;

double delta(double a, double b, double c) {
	return b*b - 4*a*c;
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double x1, x2;

	x1 = (-b + sqrt(delta(a,b,c)))/(2*a);
	x2 = (-b - sqrt(delta(a,b,c)))/(2*a);
	
	cout << x1 << endl << x2 << endl;
	
	return 0;
}








