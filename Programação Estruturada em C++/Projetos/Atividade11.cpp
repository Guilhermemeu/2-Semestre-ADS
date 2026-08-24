#include <iostream>

using std::cout;
using std::cin;

int main() {
    double x, y;

    cout << "A funcao eh: F(x,y) = 3x2 + 2y2 - xy";

    cout << "\nInsira o Valor de X: ";
    cin >> x;
    cout << "\nInsira o Valor de Y: ";
    cin >> y;

    double result = (3*x*2) + (2*y*2) - (x*y);

    cout << "\n O valor da funcao na posicao:(" << x<<","<<y<<") eh: " << result;

    return 0;
}