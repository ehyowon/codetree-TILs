#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char mirror[1000][1000] = {};
    int mir[1000][1000] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mirror[i][j];
            if(mirror[i][j] == '/'){
                mir[i][j] = 1;
            }else if(mirror[i][j] == '\\'){
                mir[i][j] = 2;
            }
        }
    }

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mir[i][j] << " ";
        }
        cout << endl;
    }*/

    int k, x, y;
    cin >> k;
    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1}, dir;
    if(k > 0 && k <= n){ //아래로
        dir = 1;
        x = 0;
        y = k % 4 - 1;
    }else if(k > n && k <= 2*n){ //왼쪽으로
        dir = 3;
        y = n - 1;
        x = k % 4 - 1;
    }else if(k > 2*n && k <= 3*n){ //위로
        dir = 2;
        x = n - 1;
        y = k % 4 - 1;
    }else if(k > 3*n && k <= 4*n){ //오른쪽으로
        dir = 0;
        y = 0;
        x = k % 4 - 1;
    }

    int cnt = 0;
    bool outRange = false;
    while(true){
        //cout << x << " " << y << " " << dir << endl;
        if(mir[x][y] == 1){
            dir = (dir + 2) % 4;
            cnt++;
        }else if(mir[x][y] == 2){
            if(dir == 1 || dir == 3){
                dir = (dir + 3) % 4;
            }else{
                dir = (dir + 1) % 4;
            }
            cnt++;
        }else{
            outRange = true;
            break;
        }
        x += dx[dir], y += dy[dir];
    }
    
    cout << cnt;
    return 0;
}