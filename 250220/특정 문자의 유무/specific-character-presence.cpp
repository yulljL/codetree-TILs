#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    int length = s.length();
    bool exist1 = false;
    bool exist2 = false;

    for(int i = 0; i < length - 1; i++) {
        if(s.substr(i,2) == "ee") {
            exist1 = true;
        }
    }
    for(int i = 0; i < length - 1; i++) {
        if(s.substr(i,2) == "ab") {
            exist2 = true;
        }
    }

    if(exist1 == true) cout << "Yes ";
    else cout << "No ";

    if(exist2 == true) cout << "Yes";
    else cout << "No";

    return 0;
}