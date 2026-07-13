
// Write a C++ program to print week day using number (1-7) with if-else statement.


#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter Day Number (1-7): ";
    cin >> day;

    if (day == 1)
    {
        cout << "Monday";
    }
    else
    {
	
        cout << "Invalid or Another Day";
}

    return 0;
}
