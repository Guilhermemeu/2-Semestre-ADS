#include <iostream>

using std::cout;
using std::cin;


int main() {
    int n;

    cout << "Digite um numero: \n";
    cin >> n;

    if (n>0){
        cout<<"O numero é positivo";
    }else if (n==0) {
        cout << "O numero é zero";
    }else{
        cout << "O numero é negativo";
    }
    
    return 0;
}