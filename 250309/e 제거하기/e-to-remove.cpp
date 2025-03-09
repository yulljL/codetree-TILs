#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();

    for(int i = 0; i < len; i++){
        if(str[i] == 'e'){
            str.erase(i, 1);
            break;
        }
    }
    cout << str;

    return 0;
}