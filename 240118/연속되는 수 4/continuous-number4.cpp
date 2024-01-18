#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 1, maxcnt = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cnt = 1;
        }else if(a[i] > a[i-1]){
            cnt++;
        }else{
            cnt = 1;
        }
        if(cnt > maxcnt){
            maxcnt = cnt;
        }
    }
    cout << maxcnt;
    return 0;
}