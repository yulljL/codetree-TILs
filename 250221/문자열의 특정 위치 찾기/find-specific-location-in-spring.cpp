#include <iostream>
using namespace std;

int main() {
    
    string str;
    char a;
    cin >> str >> a;
    int start_idx = -1;

    for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == a){
            start_idx = i;
            break;
        }
    }

    if(start_idx == -1){
        cout << "No";
    }
    else{
        cout << start_idx;
    }

    return 0;
}