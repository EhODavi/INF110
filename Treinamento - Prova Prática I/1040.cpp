#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N1, N2, N3, N4;
    double media;

    cin >> N1 >> N2 >> N3 >> N4;

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/ 10;

    if(media >= 7.0) {
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno reprovado." << endl;
    } else {
        double N5;

        cin >> N5;

        cout << "Media: " << fixed << setprecision(1) << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << N5 << endl;

        media = (media + N5) / 2;

        if(media >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }

    return 0;
}

