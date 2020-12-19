#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario, reajuste;

    cin >> salario;

    if(salario >= 0 && salario <= 400.00) {
        reajuste = 0.15 * salario;
        cout << "Novo salario: " << fixed << setprecision(2) << salario + reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if(salario >= 400.01 && salario <= 800.00) {
        reajuste = 0.12 * salario;
        cout << "Novo salario: " << fixed << setprecision(2) << salario + reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    } else if(salario >= 800.01 && salario <= 1200.00) {
        reajuste = 0.10 * salario;
        cout << "Novo salario: " << fixed << setprecision(2) << salario + reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    } else if(salario >= 1200.01 && salario <= 2000.00) {
        reajuste = 0.07 * salario;
        cout << "Novo salario: " << fixed << setprecision(2) << salario + reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    } else if(salario > 2000.00) {
        reajuste = 0.04 * salario;
        cout << "Novo salario: " << fixed << setprecision(2) << salario + reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}

