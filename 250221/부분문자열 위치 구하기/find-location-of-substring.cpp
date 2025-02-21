#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int input_len = input_str.size();
    int target_len = target_str.size();
    
    for(int i = 0; i < input_len; i++){
        if(i + target_len - 1 >= input_len)
            continue;
        
        bool is_matched = true;
        for(int j = 0; j < target_len; j++){
            if(input_str[i + j] != target_str[j])
                is_matched = false;
        }

        if(is_matched){
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
