#include <iostream>
using namespace std;

int main() {
    
    int N;
    int quantidadeDistintos = 0;
    int quantidadeRepeticao;
    
    cin >> N;
    int V[N];
    
    
    for(int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    for(int i = 0; i < N; i++) {
        quantidadeRepeticao = 0;
        
        for(int j = i + 1; j < N; j++) {
            if(V[i] == V[j]) {
                quantidadeRepeticao++;
            }
        }
        
        if(quantidadeRepeticao == 0) {
            quantidadeDistintos++;
        }
    }
    
    cout << quantidadeDistintos << endl;
    
    return 0;
}