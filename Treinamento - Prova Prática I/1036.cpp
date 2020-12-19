#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, DELTA;

    cin >> A >> B >> C;

    DELTA = (B * B) - (4 * A * C);

    if(DELTA > 0 && A != 0) {
        double R1, R2;

        R1 = (-B + sqrt(DELTA)) / (2 * A);
        R2 = (-B - sqrt(DELTA)) / (2 * A);

        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;

    } else {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}

