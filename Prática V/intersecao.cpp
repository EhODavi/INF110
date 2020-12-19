#include <iostream>
using namespace std;

int main() {
    
    int N, M;
    
    cin >> N >> M;
    int A[N];
    int B[M];
    
    
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    cout << "{";
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(A[i] == B[j]) {
                cout << A[i] << " ";
            }
        }
    }
    
    cout << "}" << endl;
    
    return 0;
}