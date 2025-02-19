#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    string curr_str;

    for(int i = 0; i < n; i++) {
        cin >> curr_str;
        str += curr_str;
    }
    cout << str;
    return 0;
}