#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    string palavra;

    cout << "Digite uma palvra: ";
    cin >> palavra;

    int i = 0;
    int j = palavra.size();
    
    while (i != j || j != i+1){
        if (palavra[i] == palavra[j] ){
        i+=1;
        j-=1;
        }
        else{
        cout << "nao e palindromo";
        return 0;
        }
    }
        cout << "e palindromo";


    return 0;


}