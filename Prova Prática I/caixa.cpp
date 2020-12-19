#include <iostream>

using namespace std;

int main() {
    
    int N;
    
    cin >> N;
    
    for(int i = 1; i <= N; i++) {
        for(int j = i; j <= N; j++) {
            if(i * j == N) {
                cout << i << " x " << j << endl;
            }
        }
    }
}   