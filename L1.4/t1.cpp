#include <iostream>
using namespace std;


int incrementBitwise(int x) {
    int mask = 1;
    while (x & mask) {
        x ^= mask;     
        mask <<= 1;
    }
    x ^= mask;         
    return x;
}


bool isGreater(int a, int b) {
    int diff = a - b;
    return (diff > 0);
}

int main() {
    cout << "Перевірка інкремента:\n";
    cout << "31 -> " << incrementBitwise(31) << endl;
    cout << "56 -> " << incrementBitwise(56) << endl;
    cout << "-25 -> " << incrementBitwise(-25) << endl;

    cout << "\nПеревірка операції '>':\n";
    cout << "44 > 46 ? " << isGreater(44, 46) << endl;
    cout << "44 > -7 ? " << isGreater(44, -7) << endl;
    cout << "15 > 30 ? " << isGreater(15, 30) << endl;

    return 0;
}
