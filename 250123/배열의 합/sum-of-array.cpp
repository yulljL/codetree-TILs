#include <iostream>
using namespace std;

int main() {
    
    int val;

    for(int i = 0; i < 4; i++) {
        int sum_val = 0;
        for(int j = 0; j < 4; j++) {
            cin >> val;
            sum_val += val;
        }
        cout << sum_val << endl;
    }

    return 0;
}