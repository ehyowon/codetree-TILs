#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int index = -1;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == c){
            index = i;
            break;
        }
    }
    if(index == -1){
        cout << "No";
    }else{
        cout << index;
    }
    return 0;
}