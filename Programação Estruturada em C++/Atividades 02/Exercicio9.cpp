#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {
    int preco;

    cout << "Digite o preco do produto:";
    cin >> preco;

    if (preco >= 100 ) {
    cout << "voce conseguiu um desconto de 10%, fazendo voce salvar "<< preco*.1 << " reais\n";
        preco -= preco*.1;
    }
    cout << preco;

    return 0;
}