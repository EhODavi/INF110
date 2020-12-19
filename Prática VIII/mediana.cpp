#include <iostream>
#include <iomanip>

using namespace std;

//Metodo bolha para ordenar um vetor
void Bolha(int a[], int n) {
    int temp;
    
    for(int j = 0; j < n - 1; j++) {
        
        for(int i = 0; i < n - 1; i ++) {
            if(a[i] > a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    
}

int main() {
    int N, A[1000];
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    Bolha(A, N);
    
    int soma = 0;
    double media, mediana;
    
    for(int i = 0; i < N; i++) {
        soma = soma + A[i];
    }
    
    media = (double)soma / N;
    
    if(N % 2 == 0) {
        mediana = (A[(N / 2) - 1] + A[N / 2]) / 2.0;
    } else {
        mediana = A[(N / 2)];
    }
    
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    cout << "Mediana: " << fixed << setprecision(1) << mediana << endl;
    
    return 0;
}