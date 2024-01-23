#include <iostream>
using namespace std;

int GetDir(char a) {
    if(a == 'R')
        return 0;
    else if(a == 'D')
        return 1;
    else if(a == 'U')
        return 2;
    else
        return 3;
}

int main() {
    int n, t;
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;

    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};

    int nx = r, ny = c;
    int dir = GetDir(d);
    int x = nx, y = ny;

    for(int i = 0; i < t; i++){
        x += dx[dir], y += dy[dir];
        if(x < 1 || x > n || y < 1 || y > n){
            dir = 3 - dir;
            if(x < 1){
                x++;
            }else if(x > n){
                x--;
            }else if(y < 1){
                y++;
            }else if(y > n){
                y--;
            }
        }
        //cout << x << " " << y << endl;
    }
    cout << x << " " << y;
    return 0;
}