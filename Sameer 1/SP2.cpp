


// Write a C++ program to check whether a number is positive or negative/zero.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The Number is Positive.";
    }
    else
    {
        cout << "The Number is Negative or Zero.";
    }

    return 0;
}
