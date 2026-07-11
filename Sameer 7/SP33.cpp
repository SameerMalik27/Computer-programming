
// Write a C++ program to check whether a year is leap year or not using if-else-if statement.


#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter Year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else if (year % 100 == 0)
    {
        cout << "Not a Leap Year";
    }
    else if (year % 4 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }

    return 0;
}
