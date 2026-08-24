#include <iostream>

using std::cout;
using std::cin;

int main() {
    double num1, num2;

    cout << "Insira a distancia percorrida (em quilometros): ";
    cin >> num1;

    cout << "\nInsira o combustivel consumido(em litros): ";
    cin >> num2;

    if (num1 == 0 || num2 == 0) {
        cout << "\nImpossivel Dividir Por Zero.";
        return 0;
    }

    double result = num1/num2;
    cout << "\n o Veiculo tem em media o consumo de: " << result << "Km/L";

    return 0;
}