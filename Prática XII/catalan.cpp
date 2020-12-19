#include <iostream>

using namespace std;

long long int catalan(int N) {
    if(N == 0) {
        return 1;
    } else {
        return ((4 * N - 2) * catalan(N - 1)) / (N + 1);
    }
}

int main() {
    int N;
    
    cin >> N;
    
    while(N != -1) {
        cout << catalan(N) << endl;
        cin >> N;
    }
    
    return 0;
}