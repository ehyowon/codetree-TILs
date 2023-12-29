#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string new_s1, new_s2;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] >= '0' && s1[i] <= '9'){
            new_s1 += s1[i];
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] >= '0' && s2[i] <= '9'){
            new_s2 += s2[i];
        }
    }
    cout << stoi(new_s1) + stoi(new_s2);
    return 0;
}