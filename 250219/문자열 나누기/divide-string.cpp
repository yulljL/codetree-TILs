#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    string str_all;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    for(int i = 0; i < n; i++){
        str_all += str[i];
    }

    int len = str_all.length();

    for(int i = 0; i <= len; i++){
        cout << str_all[i];
        if((i + 1) % 5 == 0)
            cout << endl;
    }

    return 0;
}