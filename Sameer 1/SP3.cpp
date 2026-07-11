
// Check Positive, Negative or Zero Using if-else-if Statement:


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The Number is Positive.";
    }
    else if (num < 0)
    {
        cout << "The Number is Negative.";
    }
    else
    {
        cout << "The Number is Zero.";
    }

    return 0;
}
