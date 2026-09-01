#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;


int main() {

    string nome, senha;

    cout << "insira o nome:";
    cin >> nome;
    cout << "\ninsira a senha:";
    cin >> senha;

    if (nome == "usuario" && senha == "senha") {
        cout << "Acess Granted";
    }else {
        cout << "Acess Denied";
    }

    return 0;
}