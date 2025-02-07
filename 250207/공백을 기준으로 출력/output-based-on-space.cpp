#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();

    for(int i = 0; i < len1; i++) {
        if(str1[i] != ' ') {
            cout << str1[i];
        }
    }
    for(int j = 0; j < len2; j++) {
        if(str2[j] != ' ') {
            cout << str2[j];
        }
    }

    return 0;
}