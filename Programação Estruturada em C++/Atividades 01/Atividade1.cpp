#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int main() {
    system("cls");

    int num;
    
    cout <<  "Insira um numero: ";
    cin >> num;
    
    if ((num % 2) == 0) { 
        cout << "\npar" << endl;

        cout << "exibindo todos os pares ate ele" << endl;

        for(int i = 0; i <= num; i+=2) {
           if ((i%2) == 0) {
                cout << "\n" << i;
        }
    }
    }else{
        cout << "\nimpar";
    }




    return 0;
}