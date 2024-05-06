// program to print Armstrong numbers

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int);

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        if (isArmstrong(i))
            cout << i << " ";
    }
    return 0;
}

bool isArmstrong(int number)
{
    int digitsCount = 0, sum = 0, x = number, num = number;

    while (x)
    {
        x = x / 10;
        digitsCount++;
    }

    while (num)
    {
        int d = num % 10;
        num = num / 10;
        sum += pow(d, digitsCount);
    }

    return sum == number;
}