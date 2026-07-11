
// Write a C++ program to check whether a year is leap year using if statement.


#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter Year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "Leap Year";
    }

    return 0;
}     
