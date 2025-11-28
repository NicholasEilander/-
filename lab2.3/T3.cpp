#include <iostream>
using namespace std;

void ToBinary(int n, int bin[], int& index) {
    if (n == 0) return;
    ToBinary(n / 2, bin, index);
    bin[index++] = n % 2;
}

int main() {
    int n;
    cout << "Введіть додатне число: ";
    cin >> n;

    int bin[64];
    int index = 0;

    if (n == 0) bin[index++] = 0;
    else ToBinary(n, bin, index);

    cout << "Двійковий запис: ";
    for (int i = 0; i < index; i++)
        cout << bin[i];
    cout << endl;

    return 0;
}
