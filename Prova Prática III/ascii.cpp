#include <iostream>

using namespace std;

int main() {
    int N, M;
    int L, C;
    int A, B;
    
    cin >> N >> M;
    
    char art[N][M];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> art[i][j];
        }
    }
    
    cin >> L >> C;
    cin >> A >> B;
    
    for(int i = A - 1; i < A + L - 1; i++) {
        for(int j = B - 1; j < B + C - 1; j++) {
            cout << art[i][j];
        }
        cout << endl;
    }
    
    return 0;
}