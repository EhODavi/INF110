#include <iostream>
using namespace std;

int main() {
    int N, M, elemento, cont, index = -1;
    bool ok = true, pri_esq;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        pri_esq = true;
        cont = 0;
        for(int j = 0; j < M; j++) {
            cin >> elemento;

            if(elemento == 0 && pri_esq) {
                cont++;
            } else {
                pri_esq = false;
            }
        }

        if(cont <= index && cont < M) {
            ok = false;
        }

        index = cont;
    }

    if(ok) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
