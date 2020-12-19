#include <iostream>
using namespace std;

int main() {
    int N, X;
    int dentro = 0;

    cin >> N;

    for(int contador = 0; contador < N; contador++) {
        cin >> X;

        if (X >= 10 && X <= 20) {
            dentro++;
        }
    }

    cout << dentro << " in" << endl;
    cout << (N - dentro) << " out" << endl;

    return 0;
}

