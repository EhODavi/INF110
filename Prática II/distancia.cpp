#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double X1, X2;
    double Y1, Y2;
    double distancia;
    
    cin >> X1 >> Y1 >> X2 >> Y2;
    
    distancia = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
    
    cout << fixed << setprecision(2) << distancia << endl;
    
    return 0;
}