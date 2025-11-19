#include <iostream>
using namespace std;

int main() {
    const int N = 4;
    int a[N][N];
    int diag[N];

    cout << "Матриця 4x4:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = i + j; 
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++)
        diag[i] = a[i][i];

    cout << "\nОдновимірний масив (головна діагональ):\n";
    for (int i = 0; i < N; i++)
        cout << diag[i] << " ";

    return 0;
}
