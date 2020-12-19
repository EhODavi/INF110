#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Ponto {
	int x, y;
};

double distancia(Ponto A, Ponto B) {
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

double area(Ponto P, Ponto Q, Ponto R) {
	double s;

	s = (distancia(P, Q) + distancia(P, R) + distancia(Q, R)) / 2.0;
}

int main() {
	Ponto ponto1, ponto2, ponto3;

	cin >> ponto1.x >> ponto1.y;
	cin >> ponto2.x >> ponto2.y;
	cin >> ponto3.x >> ponto3.y;

	cout << fixed << setprecision(2) << area(ponto1, ponto2, ponto3) << endl;
		
	return 0;
}