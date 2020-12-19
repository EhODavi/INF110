#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    double delta;
    
    cin >> A >> B >> C;
    
    delta = (B * B) - (4 * A * C);
    
    if(delta > 0) {
        double X1, X2;
        
        X1 = (-B + sqrt(delta)) / (2 * A);
        X2 = (-B - sqrt(delta)) / (2 * A);
        
        cout << fixed << setprecision(2) << X2 << " " << X1 << endl;
        
    } else if (delta == 0) {
        double X;
        
        X = (-B) / (2 * A);
        
        cout << fixed << setprecision(2) << X << endl;
        
    } else {
        cout << "Nao ha raiz real" << endl;
    }
    
    return 0;
}