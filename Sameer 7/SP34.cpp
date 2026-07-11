
// Write a C++ program to check whether a year is leap year or not using switch statement.


#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter Year: ";
    cin >> year;

    switch (year % 4 == 0)
    {
    case 1:
        cout << "Leap Year";
        break;

    case 0:
        cout << "Not a Leap Year";
        break;
    }

    return 0;
}
