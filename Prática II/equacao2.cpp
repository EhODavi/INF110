#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double A, B, C;
    double x1, x2, delta;
    
    cin >> A >> B >> C;
    
    delta = (B * B) - (4 * A * C);
    
    x1 = (-B + sqrt(delta)) / (2 * A);
    x2 = (-B - sqrt(delta)) / (2 * A);
    
    cout << fixed << setprecision(4) << x1 << " " << x2 << endl;
    
    return 0;
}