#include <iostream>
using namespace std;

int main() {

    long long int N;

    cin >> N;

    for(int contador = 1; contador <= N; contador++) {
        if(contador % 2 == 0) {
            cout << contador << "^2 = " << (contador * contador) << endl;
        }
    }

    return 0;
}

