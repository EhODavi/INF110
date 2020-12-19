#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double X, N[100];

    cin >> X;

    for(int i = 0; i < 100; i++) {
        N[i] = X;

        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;

        X = X / 2;
    }

    return 0;
}
