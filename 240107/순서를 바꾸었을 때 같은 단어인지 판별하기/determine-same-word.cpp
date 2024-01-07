#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    int len1 = str1.length();
    int len2 = str2.length();
    bool same = true;
    if(len1 != len2){
        same = false;
    }else{
        for(int i = 0; i < len1; i++){
            if(str1[i] != str2[i]){
                same = false;
            }
        }
    }
    if(same == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}