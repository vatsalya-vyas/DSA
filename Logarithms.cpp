#include <iostream>
#include <cmath>
using namespace std;

double calculateLogarithm(double base, double number)
{
    return log(number) / log(base);
}

int main()
{
    double base = 2.0;
    double number = 8.0;
    double logarithm = calculateLogarithm(base, number);

    cout << "Log base " << base << " of " << number << " is: " << logarithm << endl;

    return 0;
}
