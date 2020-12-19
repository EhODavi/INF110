#include <iostream>
#include <string>
using namespace std;

int main() {

	string S;
	int P, L;

	cin >> S >> P >> L;

	string substring = S.substr(P, L);

	cout << substring << endl;

	return 0;
}