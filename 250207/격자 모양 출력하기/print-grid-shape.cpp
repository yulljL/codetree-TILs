#include <iostream>
using namespace std;

int main() {
    int n , m;
    cin >> n >> m;
    int arr[10][10] = {};

    for(int i = 1; i <= m; i++) {
        int r, c;
        cin >> r >> c;
        arr[r][c] = r*c;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}