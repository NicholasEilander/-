#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    if (x >= 0) return x * x + 4 * x + 2;
    double p = 1;
    for (int i = 1; i <= 4; i++)
        p *= (x + pow(x, -i));
    return p;
}

int main() {
    cout << " x\t\t y\n";
    for (double x = -5; x <= 4.0001; x += 0.25) {
        cout << x << "\t" << f(x) << endl;
    }
    return 0;
}
