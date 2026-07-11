
// Write a C++ program to check whether a student is Pass or Fail using Nested if.


#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 40)
        {
            cout << "Student is Pass.";
        }
        else
        {
            cout << "Student is Fail.";
        }
    }
    else
    {
        cout << "Invalid Marks.";
    }

    return 0;
}
