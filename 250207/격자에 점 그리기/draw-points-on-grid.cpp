#include <iostream>
using namespace std;

int main() {
    int n, m, r, c;
    cin >> n >> m;
    int k = 1;
    int arr[n][n] = {};

    for(int i = 0; i < m; i++){
        int r, c;
        cin >> r >> c;
        arr[r-1][c-1] = k;
        k++;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}