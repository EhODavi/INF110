#include <iostream>

using namespace std;

int main() {
    int M, N, somaidade = 0;
    
    cin >> M;
    cin >> N;
    
    int idadenetos[N];
    
    for(int i = 0; i < N - 1; i++) {
        cin >> idadenetos[i];
        somaidade += idadenetos[i];
    }
    
    idadenetos[N - 1] = M - somaidade;
    
    int maior = idadenetos[0];
    
    for(int i = 0; i < N; i++) {
        if(idadenetos[i] > maior) {
            maior = idadenetos[i];
        }
    }
    
    cout << maior << endl;
    
    return 0;
}