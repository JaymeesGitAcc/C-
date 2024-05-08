// program to caculate the HCF of two given numbers
#include <iostream>
using namespace std;

int calculateHcf(int num1, int num2)
{
    int divisor = num1 < num2 ? num1 : num2;
    int dividend = (num1 + num2) - divisor;

    while (dividend % divisor)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return divisor;
}

int main()
{

    cout << calculateHcf(68, 90);
    return 0;
}