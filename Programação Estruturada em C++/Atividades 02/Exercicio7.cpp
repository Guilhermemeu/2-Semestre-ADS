#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {

    int ano;

    cout << "Digite um ano:";
    cin >> ano;

    if (ano % 4 == 0) {
        cout << "eh bissexto";
    }else {
        cout << "nao eh bissexto";
    }

    return 0;
}