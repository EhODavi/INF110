#include <iostream>
using namespace std;

int main() {
    int v[5];

	for(int i = 0; i < 5; i++) {
		cin >> v[i];
	}

	bool crescente = true;

	for(int i = 0; i < 4; i++) {
		if(v[i] > v[i + 1]) {
			crescente = false;
		}
    }

    bool decrescente = true;

	for(int i = 0; i < 4; i++) {
		if(v[i] < v[i + 1]) {
			decrescente = false;
		}
    }

    if(crescente == true) {
		cout << "C" << endl;
	} else if(decrescente == true) {
		cout << "D" << endl;
	} else {
        cout << "N" << endl;
	}

    return 0;
}
