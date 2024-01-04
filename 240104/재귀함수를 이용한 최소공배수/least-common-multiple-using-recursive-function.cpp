#include <iostream>
using namespace std;

int arr[10];

int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    return GCD(b % a, a);
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int lcm = arr[0];
    for(int i = 0; i < n; i++){
        lcm = LCM(lcm, arr[i]);
    }
    cout << lcm;
    return 0;
}