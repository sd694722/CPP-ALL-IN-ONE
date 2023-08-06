#include <iostream>
using namespace std;

int factorial(int fact)
{
    if(fact == 0){
        return 1;
    }
    return (fact * factorial(fact-1));
}

int main()
{
    cout << "Enter the number : ";
    int fact;
    cin >> fact;
    int result = factorial(fact);

    cout << "The Factorial of " << fact << " is : " << result << endl;
    return 0;
}