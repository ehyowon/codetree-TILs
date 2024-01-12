#include <iostream>
using namespace std;

int main() {
    int x1[2]={}, x2[2]={}, y1[2]={}, y2[2]={}, area[2000][2000]={};
    for(int i = 0; i < 2; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;
    }
    for(int i = 0; i < 2; i++){
        for(int x = x1[i]; x < x2[i]; x++){
            for(int y = y1[i]; y < y2[i]; y++){
                area[x][y] = i + 1;
            }
        }
    }
    int min_x = 2000, max_x = 0, min_y = 2000, max_y = 0;
    bool exist = false;
    for(int x = 0; x < 2000; x++){
        for(int y = 0; y < 2000; y++){
            if(area[x][y] == 1){
                exist = true;
                min_x = min(min_x, x);
                max_x = max(max_x, x);
                min_y = min(min_y, y);
                max_y = max(max_y, y);
            }
        }
    }
    int size;
    if(exist == false){
        size = 0;
    }else{
        size = (max_x - min_x + 1) * (max_y - min_y + 1);
    }
    cout << size;
    return 0;
}