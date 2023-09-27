#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int number)
{
    int originalNumber = number;
    int sum = 0;
    int digits = 0; // Initialize digits to 0

    // Calculate the number of digits in the number
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        digits++;
    }

    // Reset originalNumber to the actual number
    originalNumber = number;

    while (number != 0)
    {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main()
{
    int number = 153;
    bool isArmstrong = isArmstrongNumber(number);
    cout << number << " is Armstrong number: " << (isArmstrong ? "true" : "false") << endl;
    return 0;
}
