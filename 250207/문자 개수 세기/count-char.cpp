#include <iostream>
using namespace std;

int main() {


    string str;
    getline(cin, str);

    int len = str.length();
    char A;
    cin >> A;
    int cnt = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] == A)
           cnt++;
    }
    
    cout << cnt;

    return 0;
}