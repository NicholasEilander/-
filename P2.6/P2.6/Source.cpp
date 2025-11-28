#include <iostream>
using namespace std;

int sumMatrix(int** A, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += A[i][j];
    return sum;
}

int main() {
    int rows, cols;

    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    int** A = new int* [rows];
    for (int i = 0; i < rows; i++)
        A[i] = new int[cols];

    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    int result = sumMatrix(A, rows, cols);

    cout << "\nСума всіх елементів масиву = " << result << endl;

    for (int i = 0; i < rows; i++)
        delete[] A[i];
    delete[] A;

    return 0;
}
