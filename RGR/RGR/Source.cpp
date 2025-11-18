#include <iostream>
#include <vector>
using namespace std;

void main() {

    vector<char> word = { '-', '+', '-', '0','1','2','3','4','5',
                          'A','B','C','D','E','F','G','H','I','J','K' };

    string w;
    cin >> w;

    bool result = true;
    int i = 0;           
    int last = 0;        
    int last_chance = 0; 

    
    if ((w[0] == '-') && (w[1] == '+' || w[1] == '-')) {
        result = true;
    }
    else {
        result = false;
    }

    
    if (result) {
        for (i = 2; (i < w.size()) && result; i++) {

            bool isDigit = (w[i] >= '0' && w[i] <= '5');
            bool isLetter = (w[i] >= 'A' && w[i] <= 'K');

            if (!(isDigit || isLetter)) {
                result = false;
            }
        }

        
        result = (w.size() > 2) && result;
    }

    cout << result << endl;
}