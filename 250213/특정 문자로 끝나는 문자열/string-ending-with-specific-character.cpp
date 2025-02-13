#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];

    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    
    char a;
    cin >> a;
    int cnt = 0;

    for(int i = 0; i < 10; i++) {
        int len = str[i].length();
        if(str[i][len-1] == a) {
            cout << str[i] << endl;
            cnt++;
        }
    }

    if(cnt == 0)
        cout << "None";

    return 0;
}