#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int n, q;
    cin >> s >> n;
    int len = s.length();
    for(int i = 0; i < n; i++){
        cin >> q;
        if(q == 1){
            s = s.substr(1, len) + s.substr(0, 1);
            cout << s << endl;
        }else if(q == 2){
            s = s.substr(len-1, len) + s.substr(0, len-1);
            cout << s << endl;
        }else if(q == 3){
            reverse(s.begin(), is.end());
            cout << s << endl;
        }
    }
    return 0;
}