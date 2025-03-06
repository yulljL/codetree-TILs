#include <iostream>
#include <string>
using namespace std;

int main() {
    
	string str;
	cin >> str;
	int len = str.length();

	str.erase(2, 1);
	str.erase(len-3, 1);
	cout << str;

    return 0;
}