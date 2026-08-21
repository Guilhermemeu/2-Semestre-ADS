#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int dep;

cout << "Digite o Valor do Deposito: " << endl;
cin >> dep;

double vr = dep * 0.12;
double vt = dep + vr; 

cout << "o Valor do Rendimento: " << vr << endl;
cout << "o Valor total da poupanca eh: "<< vt << endl;
}