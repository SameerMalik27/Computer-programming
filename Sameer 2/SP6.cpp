
// Write a C++ program to check whether a number is even using if statement.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The Number is Even.";
    }

    return 0;
}
