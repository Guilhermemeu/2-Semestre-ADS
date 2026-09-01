#include <iostream>

using std::cout;
using std::cin;

int main() {
    double Pol,Mm;

    cout << "Digite o Valor da Chuva em Polegadas: ";
    cin >> Pol;

    Mm = Pol*25.4;
    cout << "\n O valor em Milimetros eh: " <<Mm;

    return 0;
}