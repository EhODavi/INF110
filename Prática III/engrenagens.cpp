#include <iostream>
using namespace std;

int main() {
    int P1, P2;
    
    cin >> P1 >> P2;
    
    if(P2 % P1 == 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    
    return 0;
}