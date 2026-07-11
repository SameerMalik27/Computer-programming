
// Write a C++ program to check whether a person is eligible for voting using nested if statement.


#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 0)
    {
        if (age >= 18)
        {
            cout << "You are Eligible for Voting.";
        }
        else
        {
            cout << "You are Not Eligible for Voting.";
        }
    }
    else
    {
        cout << "Invalid Age.";
    }

    return 0;
}
