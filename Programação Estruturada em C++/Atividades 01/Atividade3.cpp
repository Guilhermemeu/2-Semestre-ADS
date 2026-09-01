#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

int main() {
int frh;

cout << "Insira um valor em Fahrenheint:" << endl;
cin >> frh;

int clc = (frh-32) * 5/9;

cout << "o valor em celcius eh: " << clc << endl;

}