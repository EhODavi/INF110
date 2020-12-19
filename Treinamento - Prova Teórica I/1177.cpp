#include <iostream>
using namespace std;

int main() {

    int T, N[1000], cont = 0;

    cin >> T;

    for(int i = 0; i < 1000; i++) {
        N[i] = cont;

        cout << "N[" << i << "] = " << N[i] << endl;

        cont++;

        if(cont == T) {
            cont = 0;
        }
    }

    return 0;
}
