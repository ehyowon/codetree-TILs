#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    for(int i = len-1; i >= 0; i--){
        if(i % 2 == 1){
            cout << str[i];
        }
    }
    return 0;
}