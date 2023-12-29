#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string A;
    cin >> n >> A;
    string str;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == A){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}