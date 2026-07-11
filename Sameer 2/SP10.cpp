
// Write a C++ program to check whether a number is even or odd using nested if.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            cout << "The Number is Even.";
        }
        else
        {
            cout << "The Number is Odd.";
        }
    }
    else
    {
        if (num % 2 == 0)
        {
            cout << "The Negative Number is Even.";
        }
        else
        {
            cout << "The Negative Number is Odd.";
        }
    }

    return 0;
}
