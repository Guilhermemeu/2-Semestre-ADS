#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int frh;

cout << "Insira um valor em Fahrenheint:" << endl;
cin >> frh;

int clc = (frh-32) * 5/9;

cout << "o valor em celcius eh: " << clc << endl;

}