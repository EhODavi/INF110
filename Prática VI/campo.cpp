#include <iostream>

using namespace std;

int main() {
    int M, N, B, Y, X;

    cin >> M >> N >> B;

    int tabuleiro[M + 1][N + 1]; // Se for 0 não tem bomba por perto, se for -1 é bomba

    for(int i = 0; i < M + 1; i++) {
        for(int j = 0; j < N + 1; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for(int i = 0; i < B; i++) {
        cin >> Y >> X;

        tabuleiro[Y][X] = -1;

        if(tabuleiro[Y-1][X-1] != -1) {
            tabuleiro[Y-1][X-1]++;
        }

        if(tabuleiro[Y-1][X] != -1) {
            tabuleiro[Y-1][X]++;
        }

        if(tabuleiro[Y-1][X+1] != -1) {
            tabuleiro[Y-1][X+1]++;
        }

        if(tabuleiro[Y][X+1] != -1) {
            tabuleiro[Y][X+1]++;
        }

        if(tabuleiro[Y+1][X+1] != -1) {
            tabuleiro[Y+1][X+1]++;
        }

        if(tabuleiro[Y+1][X] != -1) {
            tabuleiro[Y+1][X]++;
        }

        if(tabuleiro[Y+1][X-1] != -1) {
            tabuleiro[Y+1][X-1]++;
        }

        if(tabuleiro[Y][X-1] != -1) {
            tabuleiro[Y][X-1]++;
        }

    }

    for(int i = 1; i < M + 1; i++) {

        for(int j = 1; j < N + 1; j++) {
            if(tabuleiro[i][j] == 0) {
                cout << "-";
            } else if (tabuleiro[i][j] == -1) {
                cout << "B";
            } else {
                cout << tabuleiro[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
