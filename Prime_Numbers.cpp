#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number = 17;
    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }

    return 0;
}
