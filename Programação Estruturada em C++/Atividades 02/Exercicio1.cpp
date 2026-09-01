#include <iostream>

using std::cout;
using std::cin;


int main() {

    int idade
    cout << "Digite a sua idade: \n";
    cin >> idade;

    if (idade >= 18) {
        cout << "Voce e maior de idade.";
    }else{
        cout << "Voce e menor de idade";
    }

    return 0;
}