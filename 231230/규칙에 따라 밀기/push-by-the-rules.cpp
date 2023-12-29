#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;
    int len = A.length();
    string str;
    for(int i = 0; i < 100; i++){
        cin >> str[i];
        if(str[i] == 'L'){
            A = A.substr(1, len) + A.substr(0, 1);
        }else if(str[i] == 'R'){
            A = A.substr(len-1, len) + A.substr(0, len-1);
        }
    }
    cout << A;
    return 0;
}