#include <iostream>
using namespace std;

int main()
{
    int dividend = 3;
    int divisor = 15;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Dividend: " << dividend << endl;
    cout << "Divisor: " << divisor << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
