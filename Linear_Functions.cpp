#include <iostream>
using namespace std;

void sampleFunction(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        counter++; // Tells the number of operations in the for loop
    }
    cout << "Counter: " << counter << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sampleFunction(arr, size);
    return 0;
}