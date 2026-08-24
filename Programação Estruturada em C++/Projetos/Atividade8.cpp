#include <iostream>

using std::cout;
using std::cin;

int main() {
    double num1, num2;

    cout << "Digite 2 Numeros: ";
    cin >> num1 >> num2;

    if (num1 == 0 || num2 == 0) {
        cout << "\nImpossivel Dividir Por Zero.";
        return 0;
    }

    double result = num1/num2;
    cout << "\n o resultado eh: " << result;

    return 0;
}