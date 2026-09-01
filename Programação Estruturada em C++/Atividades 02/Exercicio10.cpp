#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {
    int lado1,lado2,lado3;

    cout << "Digite um lado do triangulo:";
    cin >> lado1;
    cout << "Digite outro lado do triangulo:";
    cin >> lado2;
    cout << "Digite outro lado do triangulo:";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3){
        cout <<"Equilatero";
        return 0;
    }
    if (lado1 == lado2 || lado2 == lado3){
        cout << "Isoceles";
        return 0;
    }
    cout << "Escaleno";
    return 0;
}