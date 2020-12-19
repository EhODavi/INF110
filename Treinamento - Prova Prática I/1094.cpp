#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int N, quantia, totalC = 0, totalR = 0, totalS = 0;
    char tipo;

    cin >> N;

    for(int contador = 0; contador < N; contador++) {
        cin >> quantia >> tipo;

        if(tipo == 'C') {
            totalC += quantia;
        } else if (tipo == 'R') {
            totalR += quantia;
        } else if (tipo == 'S') {
            totalS += quantia;
        }
    }

    cout << "Total: " << (totalC + totalR + totalS) << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl;
    cout << "Total de ratos: " << totalR << endl;
    cout << "Total de sapos: " << totalS << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((double)(totalC) / (double)(totalC + totalR + totalS)) * 100.00 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((double)(totalR) / (double)(totalC + totalR + totalS)) * 100.00 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((double)(totalS) / (double)(totalC + totalR + totalS)) * 100.00 << " %" << endl;

    return 0;
}

