#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    int maior;
    
    cin >> A >> B >> C;
    
    if((A >= B) && (A >= C)) {
        maior = A;
    } else if((B >= A) && (B >= C)) {
        maior = B;
    } else {
        maior = C;
    }
    
    cout << maior << endl;
    
    return 0;
}