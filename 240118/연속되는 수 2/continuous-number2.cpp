#include <iostream>
using namespace std;

int main() {
    int n, a[1000] = {}, cnt = 1, maxcnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == a[i - 1]){
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