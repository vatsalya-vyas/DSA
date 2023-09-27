#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int number = 5;
    int result = factorial(number);

    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
