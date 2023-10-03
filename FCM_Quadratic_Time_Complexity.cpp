#include <iostream>
using namespace std;

int sumMatrix(int matrix[][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = sumMatrix(matrix, 3, 3);
    cout << "Sum: " << result << endl;
    return 0;
}
