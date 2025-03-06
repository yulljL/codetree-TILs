#include <iostream>
#include <string>
using namespace std;

int main() {
    
	string str;
	cin >> str;
	int len = str.length();

	str = str.substr(0,1) + str.substr(2,len-4) + str.substr(len-1, 1);
	cout << str;

    return 0;
}