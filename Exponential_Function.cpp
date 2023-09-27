#include <iostream>
#include <cmath>
using namespace std;

double calculateExponential(double base, double exponent)
{
    return pow(base, exponent);
}

int main()
{
    double base = 2.0;
    double exponent = 3.0;
    double result = calculateExponential(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
