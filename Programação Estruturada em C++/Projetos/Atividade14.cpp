#include <iostream>

using std::cout;
using std::cin;

int main() {
    double a,b;

    cout << "Digite o Valor de x primeiro extremo(a): ";
    cin >> a;

    cout << "\nDigite o Valor de x segundo extremo(b): ";
    cin >> b;

    double extremo1 = (3*a-1)/5;
    double extremo2 = ((2*a)+b-1)/5;
    double extremo3 = (a+(2*b)-1)/5;
    double extremo4 = (3*b-1)/5;

    cout << "\n os quatro extremos sao: 1= " << extremo1 << ",2= " << extremo2 << ",3= " << extremo3 << ",4= " << extremo4;

    return 0;
}