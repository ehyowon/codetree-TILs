#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2000];
    for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 2*n);
    int sum[1000];
    for(int i = 0; i < n; i++){
        sum[i] = arr[i] + arr[2*n - i];
    }
    sort(sum, sum + n);
    cout << sum[n-1];
    return 0;
}