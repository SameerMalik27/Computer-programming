
// Write a C++ program to find the largest number among three numbers using switch statement.


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

    switch (a >= b && a >= c)
    {
    case 1:
        cout << "Largest Number = " << a;
        break;

    case 0:
        switch (b >= a && b >= c)
        {
        case 1:
            cout << "Largest Number = " << b;
            break;

        case 0:
            cout << "Largest Number = " << c;
            break;
        }
    }

    return 0;
}
