#include <iostream>
#include <string>
using namespace std;

void Transpose(int A[5][5]) {
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            swap(A[i][j], A[j][i]);
}

string InsertEqual(const string& s) {
    string res;
    for (int i = 0; i < s.size(); i++) {
        res += s[i];
        if ((i + 1) % 2 == 0 && i != s.size() - 1)
            res += '=';
    }
    return res;
}

int main() {
    int A[5][5];
    cout << "Введіть матрицю 5x5:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> A[i][j];

    Transpose(A);

    cout << "\nТранспонована матриця:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    string s;
    cout << "\nВведіть рядок (мінімум 5 символів): ";
    cin >> s;

    cout << "Результат: " << InsertEqual(s) << endl;

    return 0;
}
