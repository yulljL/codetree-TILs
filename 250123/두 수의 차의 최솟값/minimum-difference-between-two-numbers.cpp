#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min = arr[1] - arr[0];

    for(int i = 0; i < n - 1; i++) {
        int ans = arr[i + 1] - arr[i];
        
        if(min > ans)
            min = ans;
    }

    cout << min;

    return 0;
}