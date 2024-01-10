#include <iostream>
using namespace std;

int main() {
    int n;
    int x1[100] = {}, x2[100] = {};
    int checked[2001] = {};

    cin >> n;
	int cur = 0;
	
    for(int i = 0; i < n; i++) {
		int distance;
		char direction;
        cin >> distance >> direction;
		if(direction == 'L'){
			x1[i] = cur - distance;
			x2[i] = cur;
			cur -= distance;
		}else{
			x1[i] = cur;
			x2[i] = cur + distance;
			cur += distance;
		}
        x1[i] += 1000;
        x2[i] += 1000;
    }
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            checked[j]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i <= 2000; i++){
        if(checked[i] >= 2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}