#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sum = n + m;
    string s = to_string(sum);
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}