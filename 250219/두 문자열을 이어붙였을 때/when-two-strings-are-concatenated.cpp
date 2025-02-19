#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string a = A+B;
    string b = B+A;

    if(a == b) {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}