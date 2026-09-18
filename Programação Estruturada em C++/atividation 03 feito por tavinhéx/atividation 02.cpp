#include <iostream>

using std::cout;
using std::endl;

int main(){
    for (int  i = 2; i <= 20; i += 1) {
        if ( i % 2 == 0) {
            cout << i << endl;
        }
    }
}