#include <iostream>
using namespace std;

int GetDir(char a) {
    if(a == 'E')
        return 0;
    else if(a == 'S')
        return 1;
    else if(a == 'N')
        return 2;
    else
        return 3;
}

int main() {
    int n;
    cin >> n;

    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};

    int num[100] = {}, dir[100] = {};
    char d[100] = {};
    for(int i = 0; i < n; i++){
        cin >> d[i] >> num[i];
        dir[i] = GetDir(d[i]);
    }

    int x = 0, y = 0, t = 0;
    bool isBack = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < num[i]; j++){
            x += dx[dir[i]], y += dy[dir[i]], t++;
            if(x == 0 && y == 0){
                isBack = true;
                cout << t;
                break;
            }
        }
        if(isBack == true){
            break;
        }
    }

    if(isBack == false){
        cout << -1;
    }

    return 0;
}