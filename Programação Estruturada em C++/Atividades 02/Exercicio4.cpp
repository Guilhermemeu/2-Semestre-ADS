#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {

    double nota;

    cout << "Digita a nota:";
    cin >> nota;

    if (nota >= 60) {
        cout << "\n Passou";
    }else{
        cout << "\n Não Passou";
    }
    return 0;
}