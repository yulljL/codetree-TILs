#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    int maxLength = len1;
    if (len2 > maxLength) maxLength = len2;
    if (len3 > maxLength) maxLength = len3;

    int minLength = len1;
    if (len2 < minLength) minLength = len2;
    if (len3 < minLength) minLength = len3;

    int difference = maxLength - minLength;

    cout << difference << endl;

    return 0;
}
