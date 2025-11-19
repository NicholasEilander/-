#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int N = 10;
    int a[N], b[N], c[N];

    for (int i = 0; i < N; i++)
        a[i] = 117 + i;

    for (int i = 0; i < N; i++)
        b[i] = 127 - 2 * i;

    for (int i = 0; i < N; i++)
        c[i] = a[i] + b[i];

    cout << "Третій масив:\n";
    for (int i = 0; i < N; i++) cout << c[i] << " ";
    cout << endl;

    int c[N];
    for (int i = 0; i < N; i++) c[i] = c[i];
    sort(c, c + N);

    int sum = c[0] + c[1];

    cout << "Сума двох мінімальних елементів = " << sum;

    return 0;
}
