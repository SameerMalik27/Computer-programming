 
// Write a C++ program to check whether a number is positive, negative, or zero using nested if statement.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num >= 0)
    {
        if (num == 0)
        {
            cout << "The Number is Zero.";
        }
        else
        {
            cout << "The Number is Positive.";
        }
    }
    else
    {
        cout << "The Number is Negative.";
    }

    return 0;
}
