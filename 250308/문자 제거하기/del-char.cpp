#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    int len = str.length();

    for(int i = 0; i < len - 1; i++){
        int n;
        cin >> n;
        if(n >= str.length()){
            str.erase(str.length()-1, 1);
            cout << str << endl;
        }else{
            str.erase(n, 1);
            cout << str << endl;
        }
        if(str.length() == 1){
            break;
        }
    }

    return 0;
}