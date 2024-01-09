#include <iostream>
using namespace std;

int n, k, a[101], b[101];
int block[101];

int main() {

    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 1; i <= k; i++){
        for(int j = a[i]; j <= b[i]; j++){
            block[j]++;
        }
    }
    int max = 0;
    for(int i = 1; i <= n; i++){
        if(block[i] > max){
            max = block[i];
        }
    }
    cout << max;
    return 0;
}