
// Write a C++ program to find the larger number between two numbers using nested if statement.


#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    if (num1 >= num2)
    {
        if (num1 == num2)
        {
            cout << "Both Numbers are Equal.";
        }
        else
        {
            cout << "Largest Number = " << num1;
        }
    }
    else
    {
        cout << "Largest Number = " << num2;
    }

    return 0;
}
