
// Write a C++ program to check whether a student is Pass, Fail or Invalid usin if else if


#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    if (marks > 100 || marks < 0)
    {
        cout << "Invalid Marks.";
    }
    else if (marks >= 40)
    {
        cout << "Student is Pass.";
    }
    else
    {
        cout << "Student is Fail.";
    }

    return 0;
}
