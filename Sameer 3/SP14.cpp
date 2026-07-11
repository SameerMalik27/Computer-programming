
// Write a C++ program to check whether a student is Pass or Fail using switch.


#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    switch (marks >= 40)
    {
        case 1:
            cout << "Student is Pass.";
            break;

        case 0:
            cout << "Student is Fail.";
            break;
    }

    return 0;
}   
