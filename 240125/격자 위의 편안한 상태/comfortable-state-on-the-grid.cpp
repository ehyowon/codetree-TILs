#include <iostream>
using namespace std;

int main() {
    int n, m, r[10000], c[10000];
    cin >> n >> m;
    int area[n][n] = {};
    for(int i = 0; i < m; i++){
        cin >> r[i] >> c[i];
        int r0 = r[i]-1, c0 = c[i]-1;
        area[r0][c0] = 1;
        int cnt = 0;
        if(r0 != 0 && area[r0-1][c0] == 1){
            cnt++;
        }
        if(c0 != 0 && area[r0][c0-1] == 1){
            cnt++;
        }
        if(r0 != n-1 && area[r0+1][c0] == 1){
            cnt++;
        }
        if(c0 != n-1 && area[r0][c0+1] == 1){
            cnt++;
        }

        /*
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout << area[j][k] << " ";
            }
            cout << endl;
        }
        */

        if(cnt == 3){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}