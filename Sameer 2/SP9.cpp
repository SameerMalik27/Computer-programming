
// Write a C++ program to check whether a number is even or odd using if-else-if.


#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;
    if(num==0)
  cout<<"The Number is Zero"; 
    else if (num % 2 == 0)
    {
        cout << "The Number is Even.";
    }
    else  
    
        cout << "The Number is Odd.";
    

    return 0;
}
