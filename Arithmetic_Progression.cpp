#include <iostream>
using namespace std;

int nthTerm(int firstTerm, int commonDifference, int n)
{
    return firstTerm + (n - 1) * commonDifference;
}

int sumOfTerms(int firstTerm, int commonDifference, int n)
{
    return (n / 2) * (2 * firstTerm + (n - 1) * commonDifference);
}

int numberOfTerms(int firstTerm, int lastTerm, int commonDifference)
{
    return ((lastTerm - firstTerm) / commonDifference) + 1;
}

int main()
{
    int firstTerm = 2;
    int commonDifference = 3;
    int n = 5;

    cout << "Arithmetic Progression:" << endl;
    for (int i = 0; i < n; i++)
    {
        int term = nthTerm(firstTerm, commonDifference, i + 1);
        cout << term << " ";
    }

    int sum = sumOfTerms(firstTerm, commonDifference, n);
    int lastTerm = nthTerm(firstTerm, commonDifference, n);
    int numberOfTermsResult = numberOfTerms(firstTerm, lastTerm, commonDifference);

    cout << "\nSum of terms: " << sum << endl;
    cout << "Number of terms: " << numberOfTermsResult << endl;

    return 0;
}
