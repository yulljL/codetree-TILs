#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    int n; 
    cin >> n;

    string strings[20];
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    char targetChar; 
    cin >> targetChar;

    int count = 0; 
    int totalLength = 0;

    for (int i = 0; i < n; ++i) {
        if (strings[i][0] == targetChar) { 
            ++count;
            totalLength += strings[i].length();
        }
    }

    // 평균 길이 계산 (소수점 둘째 자리까지)
    double averageLength = static_cast<double>(totalLength) / count;

    // 결과 출력
    cout << count << " ";
    cout << fixed << setprecision(2) << averageLength << endl;

    return 0;
}

