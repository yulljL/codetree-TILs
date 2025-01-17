#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
    int n;                     
    int nums[MAX_N];           
    int result[MAX_N];         
    int result_size = 0;       

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int end = n;               

    while (end > 0) {
        int max_val = nums[0]; 
        int max_idx = 0;       

        for (int i = 0; i < end; i++) {
            if (nums[i] > max_val) {
                max_val = nums[i];
                max_idx = i;   
            }
        }

        result[result_size++] = max_idx + 1;

        end = max_idx;
    }

    for (int i = 0; i < result_size; i++) {
        cout << result[i];
        if (i != result_size - 1) {
            cout << " "; 
        }
    }

    return 0;
}

