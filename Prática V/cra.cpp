#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int N;
    int somaNota = 0;
    int somaCredito = 0;
    double coeficiente;
    
    cin >> N;
    int disciplinaNota[N];
    int disciplinaCredito[N];
    
    for(int i = 0; i < N; i++) {
        cin >> disciplinaNota[i];
    }
    
    for(int i = 0; i < N; i++) {
        cin >> disciplinaCredito[i];
    }
    
    for(int i = 0; i < N; i++) {
        somaNota = somaNota + (disciplinaNota[i] * disciplinaCredito[i]);
        somaCredito = somaCredito + disciplinaCredito[i];
    }
    
    coeficiente = (double)somaNota/somaCredito;
    
    cout << fixed << setprecision(1) << coeficiente << endl;
    
    return 0;
}