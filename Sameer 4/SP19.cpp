
// Write a C++ program to check whether a person is eligible for voting using switch statement.

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    switch (age >= 18)
    {
    case 1:
        cout << "You are Eligible for Voting.";
        break;

    case 0:
        cout << "You are Not Eligible for Voting.";
        break;
    }

    return 0;
}
