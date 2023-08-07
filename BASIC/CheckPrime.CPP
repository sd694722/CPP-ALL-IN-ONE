#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int copyNumber = number;
    int count = 0;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % 2 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << copyNumber << " is Prime Number." << endl;
    }
    else
    {
        cout << copyNumber << " is not a Prime Number." << endl;
    }
    return 0;
}