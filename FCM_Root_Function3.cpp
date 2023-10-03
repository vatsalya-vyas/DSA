#include <iostream>

void sampleFunction(int n)
{
    int counter = 0;
    int p = 0;
    for (int i = 0; p < n; i++)
    {
        p = p + i;
        counter++; // Tells the number of operations in the for loop
        std::cout << "i= " << i << ", p=" << p << ", counter:" << counter << std::endl;
    }
    std::cout << "Final value of Counter: " << counter << std::endl;
}

int main()
{
    sampleFunction(16);
    return 0;
}