#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    cin >> str;
    int len = str.length();
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < len-1; i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            cnt1++;
        }
        if(str[i] == 'e' && str[i+1] == 'b'){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;

    return 0;
}