#include <iostream>
using namespace std;

int main() {
    int N;
    int A, L, P;
    
    cin >> N;
    cin >> A >> L >> P;
    
    if((N <= A) && (N <= L) && (N <= P)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}