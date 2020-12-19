#include <iostream>
using namespace std;

int main() {
    double precoInicial, precoFinal, porcentagem;
    char resposta;

    cout << "Informe o preco produto: " << endl;
    cin >> precoInicial;

    cout << "Desconto? (S/N)" << endl;
    cin >> resposta;

    if(resposta == 'S') {
        cout << "Quantos % ?" << endl;
        cin >> porcentagem;
        precoFinal = ((100 - porcentagem) / 100) * precoInicial;
    } else {
        precoFinal = precoInicial;
    }

    cout << "Preco Final: " << precoFinal << endl;

    return 0;
}
