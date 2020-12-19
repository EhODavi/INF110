#include <iostream>
using namespace std;

int main() {
    
    int N;
    int X;
    int quant = 0;
    
    cin >> N;
    int V[N];
    
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    cin >> X;
    
    for(int i = 0; i < N; i++) {
        if(V[i] >= X) {
            quant++;
        }
    }
    
    cout << quant << endl;
    
    return 0;
}