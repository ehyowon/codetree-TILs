#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int idx = str.find('e');
    str.erase(idx, 1);
    cout << str;
    return 0;
}