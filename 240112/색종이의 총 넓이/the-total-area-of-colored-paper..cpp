#include <iostream>
using namespace std;

int main() {
    int n, area[200][200] = {}, x[100], y[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        x[i] += 100;
        y[i] += 100;
    }
    for(int i = 0; i < n; i++){
        for(int j = x[i]; j < x[i] + 8; j++){
            for(int k = y[i]; k < y[i] + 8; k++){
                area[j][k] = 1;
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