#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;

    int len = str.length();
    int cnt = 0;

    for(int i = len-1; i >= len - n; i--) {
        cout << str[i];
    }

    return 0;
}