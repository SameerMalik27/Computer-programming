
// Write a C++ program to find the largest number among three numbers using if-else-if statement.


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

    if (a >= b && a >= c)
    {
        cout << "Largest Number = " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Largest Number = " << b;
    }
    else
    {
        cout << "Largest Number = " << c;
    }

    return 0;
}
