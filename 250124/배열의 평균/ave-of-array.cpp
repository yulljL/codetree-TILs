#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int rows = 2; 
    const int cols = 4; 
    int arr[rows][cols]; 
    double row_avg[rows] = {}; 
    double col_avg[cols] = {}; 
    double total_sum = 0;     
    int total_count = rows * cols; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        double row_sum = 0;        
        for (int j = 0; j < cols; j++) {
            row_sum += arr[i][j];
        }
        row_avg[i] = row_sum / cols;
        total_sum += row_sum;
    }

    for (int j = 0; j < cols; j++) {
        double col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += arr[i][j];
        }
        col_avg[j] = col_sum / rows;
    }

    double total_avg = total_sum / total_count;

    for (int i = 0; i < rows; i++) {
        cout << fixed << setprecision(1) << row_avg[i] << " ";
    }
    cout << endl;

    // 출력: 열 평균
    for (int j = 0; j < cols; j++) {
        cout << fixed << setprecision(1) << col_avg[j] << " ";
    }
    cout << endl;

    // 출력: 전체 평균
    cout << fixed << setprecision(1) << total_avg << endl;

    return 0;
}
