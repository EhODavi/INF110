#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N;
    char idioma[21];
    
    cin >> N;
    cin >> idioma;
    
    char palavraemportugues[N][21], palavratraduzida[N][21];
    
    for(int i = 0; i < N; i++) {
        cin >> palavraemportugues[i] >> palavratraduzida[i];
    }
    
    for(int passo = 0; passo < N - 1; passo++) {
        for(int i = 0; i < N - 1; i++) {
            if(strcmp(palavraemportugues[i], palavraemportugues[i + 1]) > 0) {
                char auxiliar[21];
                strcpy(auxiliar, palavraemportugues[i]);
                strcpy(palavraemportugues[i], palavraemportugues[i + 1]);
                strcpy(palavraemportugues[i + 1], auxiliar);
                
                strcpy(auxiliar, palavratraduzida[i]);
                strcpy(palavratraduzida[i], palavratraduzida[i + 1]);
                strcpy(palavratraduzida[i + 1], auxiliar);
            }
        }
    }
    
    cout << "portugues -> " << idioma << endl;
    
    for(int i = 0; i < N; i++) {
        cout << palavraemportugues[i] << " - " << palavratraduzida[i] << endl;
    }
    
    
    return 0;
}