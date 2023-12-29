#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int L = s.length();
    cout << s << endl;
    for(int i = 0; i < L; i++){
        s = s.substr(L-1, 1) + s.substr(0, L-1);
        cout << s << endl;
    }
    return 0;
}