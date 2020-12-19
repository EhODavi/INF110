#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char frase1[1001], frase2[1001];

	cin.getline(frase1, 1001);
	cin.getline(frase2, 1001);

	if(strcmp(frase1, frase2) == 0) {
		cout << "Accepted" << endl;
	} else {
		bool iguais = true;
		int i = 0, j = 0;

		while(i < strlen(frase1) && j < strlen(frase2)) {
			while(frase1[i] == ' ') {
				i++;
			}
			
			while(frase2[j] == ' ') {
				j++;
			}

			if(frase1[i] != frase2[j]) {
				iguais = false;
			}

			i++;
			j++;
		}

		if(iguais == true) {
			cout << "Presentation Error" << endl;
		} else {
			cout << "Wrong Answer" << endl;
		}

	}
	
	return 0;
}
