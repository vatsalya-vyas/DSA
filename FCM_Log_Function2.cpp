#include <iostream>

void sampleFunction(int n)
{
    int counter = 0;
    for (int i = 1; i < n; i = i * 2)
    {
        std::cout << "i: " << i << " counter: " << counter << std::endl;
        counter++;
    }
    std::cout << "Final value of Counter: " << counter << std::endl;
}

int main()
{
    sampleFunction(16);
    return 0;
}