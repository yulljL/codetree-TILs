#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 3;
    char arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
                arr[i][j] = arr[i][j] - ('a' - 'A'); // 소문자를 대문자로 변환
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // 행마다 줄바꿈
    }

    return 0;
}
