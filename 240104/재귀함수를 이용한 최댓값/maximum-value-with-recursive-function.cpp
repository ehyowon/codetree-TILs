#include <iostream>
using namespace std;

int arr[100];

int Max(int a){
    if(a == 0){
        return arr[0];
    }else{
        return max(Max(a-1), arr[a]);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << Max(n-1);
    return 0;
}