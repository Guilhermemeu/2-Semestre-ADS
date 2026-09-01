#include <iostream>

using std::cout;
using std::cin;

int main() {
    int uni;
    double val;

    cout << "Insira a quantidade do Produto";
    cin >> uni;
    cout << "\nInsira o Valor do Produto";
    cin >> val;

    double total = uni*val;
    cout << "O valor do Produto eh: " << total; 

    return 0;
}