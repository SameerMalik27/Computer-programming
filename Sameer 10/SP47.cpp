
// Write a C++ program to print month name using month number (1-12) with if-else statement.


#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Enter Month Number (1-12): ";
    cin >> month;

    if (month == 1)
    {
        cout << "January";
    }
    else
    {
        cout << "Invalid or Another Month";
    }

    return 0;
}
