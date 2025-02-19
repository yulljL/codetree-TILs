#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    string evenChars = "";

    for (int i = 1; i < input.length(); i += 2) {
        evenChars += input[i];
    }

    // 짝수 번째 문자를 역순으로 출력
    for (int i = evenChars.length() - 1; i >= 0; --i) {
        cout << evenChars[i];
    }

    cout << endl;
    return 0;
}
