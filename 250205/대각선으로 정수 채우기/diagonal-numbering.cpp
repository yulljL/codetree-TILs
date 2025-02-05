#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100] = {0};
    int value = 1;

    for (int d = 0; d < n + m - 1; ++d) { 
        for (int i = 0; i < n; ++i) { 
            int j = d - i; 
            if (j >= 0 && j < m) { 
                arr[i][j] = value++; 
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
