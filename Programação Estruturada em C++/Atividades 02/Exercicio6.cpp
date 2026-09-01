#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {

    int num;

    cout << "Digite um numero:";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Par";
    }else {
        cout << "Impar";
    }

    return 0;
}