#include <iostream>
using namespace std;

int g = 10;  

void func() {
    static int counter = 0;
    counter++;

    g++; 

    cout << "counter = " << counter << ", global g = " << g << endl;
}

int main() {
    int g = 5; 
    cout << "local g = " << g << endl;

    for (int i = 1; i <= 5; i++) {
        func();

        int* p = new int(i);
        cout << "dynamic p = " << *p << endl;
        delete p;
    }

    return 0;
}
