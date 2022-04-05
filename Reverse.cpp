#include <iostream>
#include <string>
#include <algorithm>
#include "Reverse.h"
using namespace std;

//reverse digit
int reverseDigit(int value)
{
    if(value<10)
    {
    return -1;
    }
    int remainder,reversedNumber;
    while(value != 0)
    {
        remainder = value%10;
        reversedNumber = reversedNumber*10 + remainder;
        value /= 10;
    }
    return reversedNumber;
};

//reverse letter
string reverseString(string letter)
{
    reverse(letter.begin(),letter.end());
    return letter;
};