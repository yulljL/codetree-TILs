#include <iostream>
using namespace std;

int main() {
    
    int arr[10][10];

    int n;
    cin >> n;
    int num = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[j][i] = num++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
