#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;

        if (r >= 1 && r <= n && c >= 1 && c <= n) {
            arr[r - 1][c - 1] = 1; 
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
