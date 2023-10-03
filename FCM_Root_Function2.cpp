#include <iostream>
#include <cmath>

void sampleFunction(int n)
{
    int counter = 0;
    for (int i = 0; i * i < n; i++)
    {
        counter++; // Tells the number of operations in the for loop
    }
    std::cout << "Counter: " << counter << std::endl;
}

int main()
{
    sampleFunction(16);
    return 0;
}