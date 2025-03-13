#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string q;
    cin >> q;
    int len_Q = q.length();
    int len = str.length();

    for(int i = 0; i < len_Q; i++){
        if(q[i] == 'L'){
            // 왼쪽으로 밀기: 첫 번째 문자를 제거하고 마지막 문자를 맨 앞으로 이동
            str = str.substr(1, len - 1) + str.substr(0, 1);
        }
        else if(q[i] == 'R'){
            // 오른쪽으로 밀기: 마지막 문자를 맨 앞으로 이동하고 나머지를 그 뒤에 붙임
            str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        }
    }
    cout << str;

    return 0;
}
