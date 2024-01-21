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
    int x = nx + dx[dir], y = ny + dy[dir];

    for(int i = 0; i < t; i++){
        if(x <= 0 || x >= n || y <= 0 || y >= n){
            dir = 3 - dir;
        }
        x += dx[dir], y += dy[dir];
        
        //cout << x << " " << y << endl;
    }
    cout << x << " " << y;
    return 0;
}