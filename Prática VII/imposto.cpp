#include <iostream>
#include <iomanip>

using namespace std;

double imposto(double v) {
    if(v <= 22847.76) {
     v = 0;
    } else if (v >= 22847.77 && v <= 33919.80) {
        v = v * (7.5/100);
        v = v - 1713.58;
    } else if (v >= 33919.81 && v <= 45012.60) {
        v = v * (15.0/100);
        v = v - 4257.57;
    } else if (v >= 45012.61 && v <= 55976.16) {
        v = v * (22.5/100);
        v = v - 7633.51;
    } else if (v > 55976.16) {
        v = v * (27.5/100);
        v = v - 10432.32;
    }
    
    return v;
}

int main() {
    double V;
    
    cin >> V;
    
    while(V != 0) {
        cout << "R$ " << fixed << setprecision(2) << imposto(V) << endl;
        
        cin >> V;
    }
    
    return 0;
}