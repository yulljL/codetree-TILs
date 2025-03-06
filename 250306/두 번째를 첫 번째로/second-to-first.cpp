#include <iostream>
#include <string>
using namespace std;

int main() {
    
	string str;
	cin >> str;
	
	char a = str[1];
	char b = str[0];

	for(int i = 0; i < str.length(); i++) {
		if(str[i] == a) {
			str[i] = b;
		}
	}

	cout << str;
	
    return 0;
}