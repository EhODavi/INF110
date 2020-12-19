#include <iostream>
using namespace std;

int main() {
    
    int P0, G, totalHoras;
    long long int totalMosquitos;
    
    totalHoras = 0;
    
    cin >> P0 >> G;
    totalMosquitos = P0;
    
    while(totalMosquitos < 1000000000) {
        totalMosquitos = totalMosquitos * (G + 1);
        totalHoras++;
    }
    
    cout << totalHoras << endl;
    
    return 0;
}