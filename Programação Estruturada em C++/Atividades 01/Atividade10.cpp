#include <iostream>

using std::cout;
using std::cin;

int main() {
    double num1, num2, num3;

    cout << "Insira a Primeira Nota: ";
    cin >> num1;

    cout << "\nInsira a Segunda Nota: ";
    cin >> num2;

    cout << "\nInsira a Terceira Nota: ";
    cin >> num3;

    double result = (num1+num2+num3)/3;
    cout << "\n A Média Aritmetica das notas é: " << result;
    

    return 0;
}