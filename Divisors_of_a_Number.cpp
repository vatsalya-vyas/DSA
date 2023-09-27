#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> getDivisors(int number)
{
    vector<int> divisors;

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            divisors.push_back(i);
            if (i != number / i)
            {
                divisors.push_back(number / i);
            }
        }
    }

    return divisors;
}

int main()
{
    int number = 12;
    vector<int> divisors = getDivisors(number);

    cout << "Divisors of " << number << ": ";
    for (int divisor : divisors)
    {
        cout << divisor << " ";
    }

    return 0;
}
