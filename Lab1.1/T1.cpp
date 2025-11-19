#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int N = 7;
    int a[N];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) a[i] = i * i + 1;   
        else a[i] = i - 8;                 
    }

    cout << "Початковий масив:\n";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

    sort(a, a + N);

    cout << "Відсортований масив (за зростанням):\n";
    for (int i = 0; i < N; i++) cout << a[i] << " ";

    return 0;
}
