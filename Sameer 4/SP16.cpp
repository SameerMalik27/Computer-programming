

// Write a C++ program to check whether a person is eligible for voting using if statement.

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are Eligible for Voting.";
    }

    return 0;
}
