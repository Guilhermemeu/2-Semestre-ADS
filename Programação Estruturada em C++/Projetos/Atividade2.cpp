#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n1,n2,n3;
    int soma;

    cout << "Insira 3 numeros inteiros:";
    cin >> n1 >> n2 >> n3;
    soma = n1+n2+n3;

    cout << "Soma: " << soma << endl;

    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(2);

    cout << "Media: " << setw(8) << soma / 3.00 << endl;
    cout << "Produto: " << (unsigned) n1*n2*n3 << endl; 


}