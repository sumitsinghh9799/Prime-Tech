#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[4][4];

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while(top <= bottom && left <= right) {

        
        for(int i = top; i <= bottom; i++) {
            cout << arr[i][left] << ", ";
        }
        left++;

        
        if(left <= right) {
            for(int j = left; j <= right; j++) {
                cout << arr[bottom][j] << ", ";
            }
            bottom--;
        }

        
        if(top <= bottom) {
            for(int i = bottom; i >= top; i--) {
                cout << arr[i][right] << ", ";
            }
            right--;
        }

        
        if(left <= right) {
            for(int j = right; j >= left; j--) {
                cout << arr[top][j] << ", ";
            }
            top++;
        }
    }

    cout << "END";

    return 0;
}