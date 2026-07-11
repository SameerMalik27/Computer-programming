
// Write a C++ program to find the larger number between two numbers using if statement.


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

    return 0;
}
