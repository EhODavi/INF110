#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Ponto {
    double X;
    double Y;
};

int main() {
    int N;

    cin >> N;
    Ponto pontos[N];
    double areaefetiva[N - 2];

    for(int i = 0; i < N; i++) {
        cin >> pontos[i].X >> pontos[i].Y;
    }

    for(int i = 1; i < N - 1; i++) {
        areaefetiva[i - 1] = fabs((pontos[i - 1].X * (pontos[i].Y - pontos[i + 1].Y) + pontos[i].X * (pontos[i + 1].Y - pontos[i - 1].Y) + pontos[i + 1].X * (pontos[i - 1].Y - pontos[i].Y)) / 2.0);
    }

    double menorarea = areaefetiva[0];

    if(N - 2 > 1) {
        for(int i = 1; i < N - 2; i++) {
            if(menorarea > areaefetiva[i]) {
                menorarea = areaefetiva[i];
            }
        }

        for(int i = 0; i < N - 2; i++) {
            if(menorarea == areaefetiva[i]) {
                cout << i + 1 << " " << fixed << setprecision(2) << menorarea << endl;
                break;
            }
        }

    } else {
        cout << "1 " << fixed << setprecision(2) << menorarea << endl;
    }

    return 0;
}