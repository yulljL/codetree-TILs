#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str[4];

    for(int i = 0; i < 4; i++) {
        string a;
        cin >> a;
        str[i] = a;
    }
    for(int i = 3; i >= 0; i--) {
        cout << str[i] << endl;
    }

    return 0;
}