#include <iostream>
using namespace std;
int sumofRange(int start, int end) // Function prototype
{
    int n = end - start + 1;
    return (n * (start + end)) / 2;
}

int main()
{
    int start = 1;
    int end = 100;

    int sum = sumofRange(start, end); // Function call
    cout << "Sum of range: " << sum << endl;
    return 0;
}
