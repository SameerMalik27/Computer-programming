
// Write a C++ program to check whether a number is even or odd using switch.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    switch (num % 2)
    {
    case 0:
        cout << "The Number is Even.";
        break;

    case 1:
    
        cout << "The Number is Odd.";
        break;
    }

    return 0;
}
