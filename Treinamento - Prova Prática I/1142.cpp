#include <iostream>
using namespace std;

int main() {

    int N;

    cin >> N;

    for(int i = 1; i <= (N * 4); i++) {
       if(i % 4 == 0) {
            cout << "PUM" << endl;
       } else {
            cout << i << " ";
       }
    }

    return 0;
}

