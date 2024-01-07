#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}