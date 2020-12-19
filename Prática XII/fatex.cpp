#include <iostream>

using namespace std;

long long int fatorial (int n) {
    if (n<=1) {
        cout << "1 = ";
        return 1;
    } else {
        cout << n << " x ";
        return n * fatorial(n-1);
    }
}

int main() {
    int n;
    
    cin >> n;
    cout << n << "! = ";
    cout << fatorial(n) << endl;
    
    return 0;
}