
// Write a C++ program to check whether a character is vowel or consonant using switch statement.


#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a Character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Character is Vowel.";
        break;

    default:
        cout << "Character is Consonant.";
    }

    return 0;
}
