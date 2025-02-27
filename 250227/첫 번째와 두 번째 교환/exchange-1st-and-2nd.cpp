#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    int len = s.length();
    char a = s[0];
    char b = s[1];

    for(int i = 0; i < len; i++){
        if(s[i] == a){
            s[i] = b;
        }
        else if(s[i] == b){
            s[i] = a;
        }
    }

    cout << s;

    return 0;
}