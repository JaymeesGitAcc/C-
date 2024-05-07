// program to caculate the HCF of two given numbers
#include <iostream>
using namespace std;

int calculateHcf(int num1, int num2)
{
    int divisor = num1 < num2 ? num1 : num2;
    int dividend = (num1 + num2) - divisor;
    int remainder = dividend % divisor;

    while (remainder)
    {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }

    return divisor;
}

int main()
{

    cout << calculateHcf(12, 36);
    return 0;
}