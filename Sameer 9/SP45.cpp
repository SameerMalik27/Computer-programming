
// Write a C++ program to print week day using number (1-7) with nested if statement.


#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter Day Number (1-7): ";
    cin >> day;

    if (day <= 4)
    {
        if (day == 1)
            cout << "Monday";
        else if (day == 2)
            cout << "Tuesday";
        else if (day == 3)
            cout << "Wednesday";
        else if (day == 4)
            cout << "Thursday";
        else
            cout << "Invalid Day Number";
    }
    else
    {
        if (day == 5)
            cout << "Friday";
        else if (day == 6)
            cout << "Saturday";
        else if (day == 7)
            cout << "Sunday";
        else
            cout << "Invalid Day Number";
    }

    return 0;
}
