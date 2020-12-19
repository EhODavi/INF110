#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, quantidade;
    double total;

    cin >> codigo >> quantidade;

    if(codigo == 1) {
        total = 4.00 * quantidade;
    } else if (codigo == 2) {
        total = 4.50 * quantidade;
    } else if (codigo == 3) {
        total = 5.00 * quantidade;
    } else if (codigo == 4) {
        total = 2.00 * quantidade;
    } else {
        total = 1.50 * quantidade;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}

