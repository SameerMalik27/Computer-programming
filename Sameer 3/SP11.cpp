
// Write a C++ program to check whether a student is Pass using if statement. Passing Marks = 40


#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    if (marks >= 40)
    {
        cout << "Student is Pass.";
    }

    return 0;
}         
