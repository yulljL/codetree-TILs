#include <iostream>
using namespace std;

int main() {
    int grid[4][4]; 
    int sum = 0;         

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // [0][0]
            if (i == 0 && j == 0) {
                sum += grid[i][j];
            }
            else if (i == 1 && (j == 0 || j == 1)) {
                sum += grid[i][j];
            }
            else if (i == 2 && j < 3) {
                sum += grid[i][j];
            }
            else if (i == 3) {
                sum += grid[i][j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
