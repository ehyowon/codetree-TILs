#include <iostream>
using namespace std;

class Rect{
public:
    int x1, x2, y1, y2;
    Rect(int x1, int x2, int y1, int y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }
    Rect(){}
};

Rect rectangle[10];

int main() {
    int n, area[200][200] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        int x1, x2, y1, y2;
        rectangle[i] = Rect(x1, x2, y1, y2);
        cin >> rectangle[i].x1 >> rectangle[i].y1 >> rectangle[i].x2 >> rectangle[i].y2;
        rectangle[i].x1 += 100;
        rectangle[i].y1 += 100;
        rectangle[i].x2 += 100;
        rectangle[i].y2 += 100;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 200; j++){
            for(int k = 0; k < 200; k++){
                if(j >= rectangle[i].x1 && j < rectangle[i].x2 && k >= rectangle[i].y1 && k < rectangle[i].y2){
                    area[j][k] = 1;
                }
            }
        }
    }
    int size = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(area[i][j] == 1){
                size++;
            }
        }
    }
    cout << size;
    return 0;
}