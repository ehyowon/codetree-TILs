#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int new_arr[100];
    int a = 1;
    while(a <= n){
        for(int i = 0; i < a; i++){
            new_arr[i] = arr[i];
        }
        sort(new_arr, new_arr + a);
        cout << new_arr[a/2] << " ";
        a += 2;
    }
    return 0;
}