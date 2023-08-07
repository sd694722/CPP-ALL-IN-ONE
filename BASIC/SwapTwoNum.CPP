#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter number 1 value : ";
    cin >> number1;
    cout << "Enter number 1 value : ";
    cin >> number2;

    cout << "\n\nBefore Swap:" << endl;
    cout << "\nNumber 1 = " << number1 << "\nNumber 2 = " << number2 << endl;

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    cout << "\n\nAfter Swap:" << endl;
    cout << "\nNumber 1 = " << number1 << "\nNumber 2 = " << number2 << endl;

    return 0;
}