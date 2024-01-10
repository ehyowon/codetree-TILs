#include <iostream>
using namespace std;

int main() {
    int n;
    int x1[100], x2[100];
    int check[200];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x1[i] >> x2[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            check[j]++;
        }
    }
    int max = 0; 
    for(int i = 1; i <= n; i++){
        if(check[i] > max){
            max = check[i];
        }
    }
    cout << max;
    return 0;
}