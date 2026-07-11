
// Write a C++ program to check whether a character is vowel or consonant using if-else statement.

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a Character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Character is Vowel.";
    }
    else
    {
        cout << "Character is Consonant.";
    }

    return 0;
}
