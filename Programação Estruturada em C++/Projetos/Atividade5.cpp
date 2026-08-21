#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int tp;
    int vp;

    cout << "Insira a quantididade de produto:" << endl;
    cin >> tp;

    cout << "\nInsira o Valor do Produto:" << endl;
    cin >> vp;

    double SubTotal = tp * vp;
    double ValorDesconto = SubTotal * 0.2;
    double Total = SubTotal - ValorDesconto;
    
    cout << "Subtotal:" << SubTotal << endl;
    cout << "Valor Desconto:" << ValorDesconto << endl;
    cout << "Total:" << Total << endl;

    return 0;
}