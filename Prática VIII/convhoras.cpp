#include <iostream>
#include <iomanip>

using namespace std;

void convhoras(int seg, int &h, int &m, int &s) {
    h = seg / 3600;
    seg = seg % 3600;
    m = seg / 60;
    seg = seg % 60;
    s = seg;
}

int main() {
    int seg, h, m, s;
    
    cin >> seg;
    
    convhoras(seg, h, m, s);
    
    cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;

    return 0;
}