#include <iostream>
using namespace std;

int main() {
	long long int f[90] = {0,1};
	int i;
	
	for(i=2;i<90;i++)
		f[i] = f[i-1] + f[i-2];

	for(i=0;i<90;i++)
		cout << f[i] << " ";
	
	return 0;
}
