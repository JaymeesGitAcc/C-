// program to print all the palindrome numbers from 1 to 500

#include <iostream>
using namespace std;

// function to check whether a number is palindrome or not
bool isPalindrome(int);

int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (isPalindrome(i))
            cout << i << " ";
    }
    return 0;
}

bool isPalindrome(int number)
{
    int num = number, sum = 0;

    while (num)
    {
        int d = num % 10;
        num = num / 10;
        sum = sum * 10 + d;
    }

    return sum == number;
}