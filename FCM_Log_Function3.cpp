#include <iostream>

void sampleFunction(int n)
{
    int counter = 0;
    for (int i = n; i > 0; i = i / 2)
    {
        std::cout << "i: " << i << " counter: " << counter << std::endl;
        counter++; // Tells the number of operations in for loop
    }
    std::cout << "Final value of Counter: " << counter << std::endl;
}

int main()
{
    sampleFunction(16);
    return 0;
}
