#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100][100] = {0}; 
    int value = 1; 

    for (int col = n - 1; col >= 0; col--) { 
        if ((n - col - 1) % 2 == 0) { 
            for (int row = n - 1; row >= 0; row--) { 
                arr[row][col] = value++;
            }
        } else { 
            for (int row = 0; row < n; row++) { 
                arr[row][col] = value++;
            }
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
