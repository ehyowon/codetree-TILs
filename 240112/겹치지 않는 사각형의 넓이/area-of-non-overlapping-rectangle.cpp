#include <iostream>
using namespace std;

int main() {
    int x1[2]={}, x2[2]={}, y1[2]={}, y2[2]={}, area[2000][2000]={};
    for(int i = 0; i < 2; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;
    }
    int Mx1, Mx2, My1, My2;
    cin >> Mx1 >> My1 >> Mx2 >> My2;
    Mx1 += 1000;
    Mx2 += 1000;
    My1 += 1000;
    My2 += 1000;
    for(int j = 0; j < 2000; j++){
        for(int k = 0; k < 2000; k++){
            if(j >= Mx1 && j < Mx2 && k >= My1 && k < My2){
                area[j][k] = 4;
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2000; j++){
            for(int k = 0; k < 2000; k++){
                if(j >= x1[i] && j < x2[i] && k >= y1[i] && k < y2[i]){
                    area[j][k]++;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2000; j++){
            for(int k = 0; k < 2000; k++){
                if(j >= x1[i] && j < x2[i] && k >= y1[i] && k < y2[i]){
                    if(area[j][k] == 1){
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}