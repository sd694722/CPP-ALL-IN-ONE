#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int copyNumber = number;

    int reverse = 0, remender;
    while (number != 0)
    {
        remender = number % 10;
        reverse = reverse * 10 + remender;
        number /= 10;
    }

    if (reverse == copyNumber)
        cout << copyNumber << " is a Palindrome Number." << endl;
    else
        cout << copyNumber << " is not a Palindrome Number." << endl;

    return 0;
}