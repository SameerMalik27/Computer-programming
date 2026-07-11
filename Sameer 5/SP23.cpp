
// Write a C++ program to find the larger number between two numbers using if-else-if statement.


#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Largest Number = " << num1;
    }
    else if (num2 > num1)
    {
        cout << "Largest Number = " << num2;
    }
    else
    {
        cout << "Both Numbers are Equal.";
    }

    return 0;
}
