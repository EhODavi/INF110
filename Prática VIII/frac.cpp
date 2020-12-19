#include <iostream>

using namespace std;

void somafrac(int na, int da, int nb, int db, int &nr, int &dr) {
   dr = da * db;
   na = na * (dr / da);
   nb = nb * (dr / db);
   nr = na + nb;
   
   int contador;
   if(nr >= dr) {
        contador = dr;
   } else {
        contador = nr;
   }
   
   for(contador; contador >= 1; contador--) {
       if((nr % contador == 0) && (dr % contador == 0)) {
            nr = nr / contador;
            dr = dr / contador;
       }
   }
}


int main() {
    int A, B, C, D, E, F;
    char bar1, bar2;
    
    cin >> A >> bar1 >> B >> C >> bar2 >> D;
    
    somafrac(A, B, C, D, E, F);
    
    cout << A << bar1 << B << "+" << C << bar2 << D << "=" << E << "/" << F << endl;
    
    return 0;
}