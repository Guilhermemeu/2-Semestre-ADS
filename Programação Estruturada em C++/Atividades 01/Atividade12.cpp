#include <iostream>

using std::cout;
using std::cin;

int main() {
    double Cls,Fhr;

    cout << "Digite um valor em celcius: ";
    cin >> Cls;

    Fhr = (9*Cls/5) + 32;
    cout << "\n O valor em Farenheint eh: " << Fhr;

    return 0;
}