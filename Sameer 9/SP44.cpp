
// Write a C++ program to print week day using number (1-7) with switch statement.


#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter Day Number (1-7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Day Number";
    }

    return 0;
}
