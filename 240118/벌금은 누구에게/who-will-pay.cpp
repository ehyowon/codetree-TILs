#include <iostream>
using namespace std;

int main() {
    int n, m, k, num[10000];
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        cin >> num[i];
    }
    bool Pay = false;
    for(int i = 0; i < m; i++){
        if(num[i] > k){
            Pay = true;
            cout << i+1;
            break;
        }
    }
    if(Pay == false){
        cout << -1;
    }
    return 0;
}