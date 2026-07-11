
// Write a C++ program to check whether a number is positive, negative, or zero using switch statement.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    switch (num > 0)
    {
    case 1:
        cout << "The Number is Positive.";
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            cout << "The Number is Negative.";
            break;

        case 0:
            cout << "The Number is Zero.";
            break;
        }
    }

    return 0;
}
