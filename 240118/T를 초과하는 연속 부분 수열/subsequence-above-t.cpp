#include <iostream>
using namespace std;

int main() {
    int n, t, a[1000];
    cin >> n >> t;
    bool isBigger[1000];
    int cnt = 1, maxcnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] <= t){
            isBigger[i] = false;
        }else{
            isBigger[i] = true;
        }

        if(i == 0){
            cnt = 1;
        }else if(isBigger[i] == true && isBigger[i-1] == true){
            cnt++;
        }else{
            cnt = 1;
        }

        if(cnt > maxcnt){
            maxcnt = cnt;
        }
    }
    bool Exist = false;
    for(int i = 0; i < n; i++){
        if(a[i] > t){
            Exist = true;
        }
    }
    if(Exist == false){
        cout << 0;
    }else{
        cout << maxcnt;
    }
    return 0;
}