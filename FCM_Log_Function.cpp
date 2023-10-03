#include <iostream>
#include <cmath>

void sampleFunction(int n)
{
    int counter = 0;
    for (int i = 0; i < std::log(n); i++)
    {
        counter++; // Tells the number of operations in for loop
    }
    std::cout << "Final value of Counter: " << counter << std::endl;
}

int main()
{
    sampleFunction(16);
    return 0;
}