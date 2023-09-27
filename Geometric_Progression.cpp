#include <iostream>
#include <cmath>
using namespace std;

double nthTerm(double firstTerm, double commonRatio, int n)
{
    return firstTerm * pow(commonRatio, n - 1);
}

double sumOfTerms(double firstTerm, double commonRatio, int n)
{
    if (commonRatio == 1)
    {
        return firstTerm * n;
    }
    else
    {
        return firstTerm * (1 - pow(commonRatio, n)) / (1 - commonRatio);
    }
}

int main()
{
    double firstTerm = 2;
    double commonRatio = 3;
    int n = 5;

    cout << "Geometric Progression:" << endl;
    for (int i = 0; i < n; i++)
    {
        double term = nthTerm(firstTerm, commonRatio, i + 1);
        cout << term << " ";
    }

    double sum = sumOfTerms(firstTerm, commonRatio, n);

    cout << "\nSum of terms: " << sum << endl;

    return 0;
}
