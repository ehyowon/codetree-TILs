#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    int len = str.length();
    for(int i = len-1; i >= len-n; i--){
        cout << str[i];
    }
    return 0;
}