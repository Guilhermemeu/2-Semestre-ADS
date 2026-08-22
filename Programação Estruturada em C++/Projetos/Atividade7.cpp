#include <iostream>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string nome;
    string senha;

    int saldo = 0;
    int retirar = 0;
    int dinheiro = 0;
    bool loop = true;
    bool validname = false;
    bool again = false;

    while (loop == true)
    {
        if (again != true)
        {

            while (validname == false)
            {
                cout << "Bem vindo ao banco Digite seu nome e sua senha:" << endl;
                cin >> nome >> senha;

                if (nome == "Guilherme")
                {
                    if (senha == "12345678")
                    {
                        saldo = 3000;
                        validname = true;
                    }
                    else
                    {
                        cout << "senha errada tente novamente" << endl;
                    }
                }
            }
        }

        if (saldo != 0)
        {
            cout << "gostaria de sacar quantos reais?" << endl;
            cin >> retirar;

            saldo -= retirar;
            dinheiro += retirar;

            cout << "Voce tem " << saldo << " de saldo e " << dinheiro << " reais em maos" << endl;

            cout << "gostaria de realizar mais um movimento y/n?";
            char question;
            cin >> question;

            if (question == 'n')
            {
                loop = false;
            }
            else
            {
                again = true;
            }
        }
    }
}