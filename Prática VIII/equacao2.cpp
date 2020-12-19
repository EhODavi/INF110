#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int eq2grau(double a, double b, double c, double &x1, double &x2) {
    double delta;
    
    delta = (b * b) - (4 * a * c);
    
    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    } else if (delta == 0) {
        x1 = (-b) / (2 * a);
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double A, B, C, X1, X2;
    
    cin >> A >> B >> C;
    
    if(eq2grau(A, B, C, X1, X2) == 0) {
        cout << "Nao ha raiz real" << endl;
    } else if(eq2grau(A, B, C, X1, X2) == 1) {
        cout << fixed << setprecision(2) << X1 << endl;
    } else {
        cout << fixed << setprecision(2) << X2 << " " << X1 << endl;
    }
    
    return 0;
}