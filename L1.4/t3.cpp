#include <iostream>
using namespace std;

int main() {
    int A = 356;
    int B = 35;
    float C = 151.27;
    int D = 12;
    int E = 57;
    float F = 0; 

    
    float result =
        ((A & B) + (++C) >= D) - E | (float)F;

    cout << "Result = " << result << endl;
    return 0;
}
