#include <iostream>
using namespace std;

int calculateSum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int n = 100;
    int sum = calculateSum(n);
    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;
    return 0;
}
