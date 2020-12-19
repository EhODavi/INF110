#include <iostream>
using namespace std;

int main() {
	int M, N, P, Q;
    int A[100][100], B[100][100], C[100][100];
    int auxiliar = 0;

	cin >> M >> N >> P >> Q;

    if(N == P) {
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }

        for(int i = 0; i < P; i++) {
            for(int j = 0; j < Q; j++) {
                cin >> B[i][j];
            }
        }

        for(int i = 0; i < M; i++) {

            for(int j = 0; j < Q; j++) {
                C[i][j] = 0;

                for(int x = 0; x < P; x++) {
                    auxiliar += A[i][x] * B[x][j];
                }

                C[i][j] = auxiliar;

                auxiliar = 0;
            }
        }

        cout << "Matriz A:" << endl;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Matriz B:" << endl;
        for(int i = 0; i < P; i++) {
            for(int j = 0; j < Q; j++) {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Matriz C:" << endl;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < Q; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }

    } else {
        cout << "Nao e possivel realizar a multiplicacao" << endl;
    }

	return 0;
}







