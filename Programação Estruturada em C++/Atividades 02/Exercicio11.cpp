#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {
    char type;
    int temp;

    cout << "Qual tipo de temperatura voce quer converter(c/f):";
    cin >> type;
    cout << "Digite a temperatura:";
    cin >> temp;

    if (type == 'c') {
        cout <<"A temperatura em farenheint eh:" << (temp * 1.8) + 32;
    }
    
    if (type == 'f') {
        cout <<"A temperatura em Celcius eh:" << (temp / 1.8) - 32;
    }
    return 0;
}