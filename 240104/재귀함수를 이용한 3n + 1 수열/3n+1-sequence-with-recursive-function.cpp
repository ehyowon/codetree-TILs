#include <iostream>
using namespace std;

int cnt = 0;
int Cal(int n){
    if(n == 1){
        cout << cnt;
        return cnt;
    }else if(n % 2 == 0){
        cnt++;
        return Cal(n/2);
    }else{
        cnt++;
        return Cal(3*n + 1);
    }
}

int main() {
    int n;
    cin >> n;
    Cal(n);
    return 0;
}