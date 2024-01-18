#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    bool Plus[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 1, maxcnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            Plus[i] = false;
        }else{
            Plus[i] = true;
        }

        if(i == 0){
            cnt = 1;
        }else if(Plus[i] == Plus[i-1]){
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