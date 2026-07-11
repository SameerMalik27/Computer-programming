
// Write a C++ program to find the largest number among three numbers using nested if statement.


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Enter Third Number: ";
    cin >> c;

    if (a >= b)
    {
        if (a >= c)
        {
            cout << "Largest Number = " << a;
        }
        else
        {
            cout << "Largest Number = " << c;
        }
    }
    else
    {
        if (b >= c)
        {
            cout << "Largest Number = " << b;
        }
        else
        {
            cout << "Largest Number = " << c;
        }
    }

    return 0;
}
