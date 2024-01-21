#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int cnt = 0, count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i-1][j] == 1){
                cnt++;
            }
            if(arr[i][j-1] == 1){
                cnt++;
            }
            if(arr[i+1][j] == 1){
                cnt++;
            }
            if(arr[i][j+1] == 1){
                cnt++;
            }
            if(cnt >= 3){
                count++;
            }
            cnt = 0;
        }
    }
    cout << count;
    return 0;
}