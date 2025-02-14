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

    for(int i = len-1; i >= 0; i--) {
        if(cnt >= n)
            break;
        cout << str[i];
        cnt++;
    }

    return 0;
}