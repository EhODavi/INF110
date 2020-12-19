#include <iostream>
using namespace std;

int main() {

    int N;

    cin >> N;

    for(int contador = 1; contador <= 10000; contador++) {
        if(contador % N == 2) {
            cout << contador << endl;
        }
    }

    return 0;
}

