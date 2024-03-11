#include <iostream>
#include <Windows.h>


int main()
{
    int k = 7;
    for (int i = 1; i <= 10; i++)
    {
        std::cout << k << " x " << i << " = " << k * i << "\n";
    }

    return 0;
}