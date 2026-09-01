#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#define VALORCONSULTA 150;
int main(){
    string nome;
    int qntConsulta;
     
    cout << "Digite o seu primeiro nome: " << endl;
    cin >> nome; 
    cout << "digite o numero de consultas: " << endl;
    cin >> qntConsulta;

    cout << "O Medico(a) " << nome << " recebe como salario: " << qntConsulta * VALORCONSULTA;
        
    
    
}