#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;
    int answer[4][4] = {};
    answer[x][y] = 1;

    int dir_num = 0;
    int n, m;
    cin >> n >> m;
    
    for(int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if(!InRange(nx, ny, n, m) || answer[nx][ny] != 0){
            dir_num = (dir_num + 1) % 4;
        }

        x = x + dx[dir_num]; y = y + dy[dir_num];
        answer[x][y] = i;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}