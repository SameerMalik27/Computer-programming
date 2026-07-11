
// Write a C++ program to check whether a character is vowel or consonant using nested if statement.


#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a Character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "Character is Vowel.";
        }
        else
        {
            cout << "Character is Consonant.";
        }
    }
    else
    {
        cout << "Invalid Character.";
    }

    return 0;
}
