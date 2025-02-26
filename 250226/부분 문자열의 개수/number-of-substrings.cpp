#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    string code;
    cin >> str >> code;
    int len = str.length();
    int cnt = 0;

    for(int i = 0; i < len; i++){
        if(str.substr(i, 2) == code){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}