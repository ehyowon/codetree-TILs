#include <iostream>
using namespace std;

int main() {
    int n, m, k, num[10000], l;
    cin >> n >> m >> k;
    bool Pay = false;
    for(int i = 1; i <= m; i++){
        cin >> l;
        num[l]++;
        for(int j = 1; j <= n; j++){
            if(num[j] >= k){
                Pay = true;
                cout << j;
                break;
            }
        }
        if(Pay == true){
            break;
        }
    }
    if(Pay == false){
        cout << -1;
    }

    
    /*int stu[n] = {};
    bool Pay = false;
    for(int i = 0; i < m; i++){
        stu[num[i]]++;
        for(int j = 1; j <= n; j++){
            if(stu[j] >= k){
                Pay = true;
                cout << j;
                break;
            }
        }
        if(Pay == true){
            break;
        }
    }
    if(Pay == false){
        cout << -1;
    }*/
    return 0;
}