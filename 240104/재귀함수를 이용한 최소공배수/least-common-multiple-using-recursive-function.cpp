/*
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
*/

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return (a*b) / gcd(a,b);
}
int main() {
    int n;
    cin>>n;
    int num[10];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int result = num[0];
    for(int i=1;i<n;i++){
        result = lcm(result,num[i]);
    }
    cout<<result;
    return 0;
}