#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {
    int num1,num2,num3;

    cout << "Digite um numero:";
    cin >> num1;
    cout << "Digite outro numero:";
    cin >> num2;
    cout << "Digite outro numero:";
    cin >> num3;

    if (num1 > num2 && num1 > num3){
        cout << "\nO numero " << num1 << " eh o maior";
        return 0;
    }

    if (num2 > num1 && num2 > num3){
        cout << "\nO numero " << num2 << " eh o maior";
        return 0;
    }
        cout << "\nO numero " << num3 << " eh o maior";


    return 0;
}