#include <iostream>
using namespace std;

void swapWithTempVar(int &a, int &b)
{
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping using temp variable: a = " << a << ", b = " << b << endl;
}

void swapWithArithmetic(int &a, int &b)
{
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping using arithmetic operations: a = " << a << ", b = " << b << endl;
}

void swapWithBitwiseXOR(int &a, int &b)
{
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping using bitwise XOR: a = " << a << ", b = " << b << endl;
}

void swapWithMultiplication(int &a, int &b)
{
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a * b;
    b = a / b;
    a = a / b;

    cout << "After swapping using multiplication and division: a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    // Swapping using a temporary variable
    swapWithTempVar(a, b);

    // Swapping using arithmetic operations
    swapWithArithmetic(a, b);

    // Swapping using bitwise XOR
    swapWithBitwiseXOR(a, b);

    // Swapping using multiplication and division
    swapWithMultiplication(a, b);

    return 0;
}
