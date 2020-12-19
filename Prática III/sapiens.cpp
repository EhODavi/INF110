#include <iostream>
using namespace std;

int main() {
    int NF, FT, FP;
    
    cin >> NF >> FT >> FP;
    
    if(FT > 15) {
        cout << "Reprovado" << endl;
    } else if(FP > 7) {
        cout << "Reprovado" << endl;
    } else if(NF < 40) {
        cout << "Reprovado" << endl;
    } else if((NF >= 40) && (NF < 60)) {
        cout << "Final" << endl;
    } else {
        cout << "Aprovado" << endl;
    }
    
    return 0;
}