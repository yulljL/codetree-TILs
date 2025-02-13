#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[20];

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    char a;
    cin >> a;
    int cnt = 0;
    int len_all = 0;

    for(int i = 0; i < n; i++) {
        int len = str[i].length();
        len_all += len;
        if(str[i][0] == a) {
            cnt++;
        }
    }
    double avg = (len_all) / n;

    cout << fixed << setprecision(2);
    cout << cnt << " " << avg;
    return 0;
}