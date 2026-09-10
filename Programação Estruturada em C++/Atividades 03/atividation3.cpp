#include <iostream>

int main()
{
 int i = 1;
    do
    {
    if (i % 2 != 0){
        std::cout << i << std::endl;
    }
    i++;
    } while (i<=15);

    return 0;
}