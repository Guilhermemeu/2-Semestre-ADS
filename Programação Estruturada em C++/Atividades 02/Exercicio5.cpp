#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {

    int num1,num2;

    cout << "Digite o primeiro numero:";
    cin >> num1;
    cout << "Digite o segundo numero:";
    cin >> num2;

    if (num1 == num2) {
    cout << "Os numeros sao iguais ";
    }
    if (num1 > num2){
    cout << "O numero " << num1 << " e maior que " << num2;
    } else {
    cout << "O numero " << num2 << " e maior que " << num1;
    }
    return 0;
}