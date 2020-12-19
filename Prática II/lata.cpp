#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double R, A;
    
    cin >> R >> A;
    
    cout << fixed << setprecision(2) << (3.1415 * R * R * A) << endl;
    
    return 0;
}