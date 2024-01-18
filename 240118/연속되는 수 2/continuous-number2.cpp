#include <iostream>
using namespace std;

int main() {
    int n, a[1000] = {}, cnt = 0, maxcnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0 || a[i] != a[i - 1]){
               cnt++;
        }
        if(cnt > maxcnt){
            maxcnt = cnt;
        }
    }
    cout << maxcnt;
    return 0;
}