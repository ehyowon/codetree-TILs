#include <iostream>
using namespace std;

int main() {
    int n, x1[10]={}, x2[10]={}, y1[10]={}, y2[10]={}, area[200][200]={};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 100;
        x2[i] += 100;
        y1[i] += 100;
        y2[i] += 100;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 200; j++){
            for(int k = 0; k < 200; k++){
                if(j >= x1[i] && j < x2[i] && k >= y1[i] && k < y2[i]){
                    if(i % 2 == 0){
                        area[j][k] = 1; //빨강
                    }else{
                        area[j][k] = 2; //파랑
                    }
                }
            }
        }
    }
    int size = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(area[i][j] == 2){
                size++;
            }
        }
    }
    cout << size;
    return 0;
}