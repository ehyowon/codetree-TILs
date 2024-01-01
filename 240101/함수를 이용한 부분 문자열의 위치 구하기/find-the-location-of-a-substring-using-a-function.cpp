#include <iostream>
#include <string>
using namespace std;

string str1, str2;

bool IsSubStr(int idx){
    int n = (int)str1.size();
    int m = (int)str2.size();
    if(idx + m - 1 >= n){
        return false;
    }
    for(int j = 0; j < m; j++){
        if(text[idx + j] != str2[j]){
            return false;
        }
    }
    return true;
}

int FindIndex() {
    int n = (int)str1.size();
    for(int i = 0; i < n; i++){
        if(IsSubStr(i)){
            return i;
        }
    }
    return -1;
}

int main() {
    cin >> str1 >> str2;
    cout << FindIndex();
    return 0;
}